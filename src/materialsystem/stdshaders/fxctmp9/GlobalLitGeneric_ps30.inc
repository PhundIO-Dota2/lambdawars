// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// defined $PIXELFOGTYPE && defined $WRITEWATERFOGTODESTALPHA && ( $PIXELFOGTYPE != 1 ) && $WRITEWATERFOGTODESTALPHA
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPTINT && $LIGHTING_PREVIEW && $FASTPATHENVMAPTINT
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPCONTRAST && $LIGHTING_PREVIEW && $FASTPATHENVMAPCONTRAST
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH
// ($FLASHLIGHT || $FLASHLIGHTSHADOWS) && $LIGHTING_PREVIEW
// !$MODEL && $MORPHING_VTEX
// !$MODEL && $COMPRESSED_VERTS
// !$MODEL && $SKINNING
// !$MODEL && $MORPHING_VTEX
#include "shaderlib/cshader.h"
class globallitgeneric_ps30_Static_Index
{
private:
	int m_nFULLBRIGHT;
#ifdef _DEBUG
	bool m_bFULLBRIGHT;
#endif
public:
	void SetFULLBRIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFULLBRIGHT = i;
#ifdef _DEBUG
		m_bFULLBRIGHT = true;
#endif
	}
	void SetFULLBRIGHT( bool i )
	{
		m_nFULLBRIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bFULLBRIGHT = true;
#endif
	}
private:
	int m_nFOW;
#ifdef _DEBUG
	bool m_bFOW;
#endif
public:
	void SetFOW( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFOW = i;
#ifdef _DEBUG
		m_bFOW = true;
#endif
	}
	void SetFOW( bool i )
	{
		m_nFOW = i ? 1 : 0;
#ifdef _DEBUG
		m_bFOW = true;
#endif
	}
private:
	int m_nVERTEXCOLOR;
#ifdef _DEBUG
	bool m_bVERTEXCOLOR;
#endif
public:
	void SetVERTEXCOLOR( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nVERTEXCOLOR = i;
#ifdef _DEBUG
		m_bVERTEXCOLOR = true;
#endif
	}
	void SetVERTEXCOLOR( bool i )
	{
		m_nVERTEXCOLOR = i ? 1 : 0;
#ifdef _DEBUG
		m_bVERTEXCOLOR = true;
#endif
	}
public:
	// CONSTRUCTOR
	globallitgeneric_ps30_Static_Index( IShaderShadow *pShaderShadow, IMaterialVar **params )
	{
#ifdef _DEBUG
		m_bFULLBRIGHT = false;
#endif // _DEBUG
		m_nFULLBRIGHT = 0;
#ifdef _DEBUG
		m_bFOW = false;
#endif // _DEBUG
		m_nFOW = 0;
#ifdef _DEBUG
		m_bVERTEXCOLOR = false;
#endif // _DEBUG
		m_nVERTEXCOLOR = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bFULLBRIGHT && m_bFOW && m_bVERTEXCOLOR;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 2 * m_nFULLBRIGHT ) + ( 4 * m_nFOW ) + ( 8 * m_nVERTEXCOLOR ) + 0;
	}
};
#define shaderStaticTest_globallitgeneric_ps30 psh_forgot_to_set_static_FULLBRIGHT + psh_forgot_to_set_static_FOW + psh_forgot_to_set_static_VERTEXCOLOR + 0
class globallitgeneric_ps30_Dynamic_Index
{
private:
	int m_nPIXELFOGTYPE;
#ifdef _DEBUG
	bool m_bPIXELFOGTYPE;
#endif
public:
	void SetPIXELFOGTYPE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPIXELFOGTYPE = i;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
	void SetPIXELFOGTYPE( bool i )
	{
		m_nPIXELFOGTYPE = i ? 1 : 0;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
public:
	// CONSTRUCTOR
	globallitgeneric_ps30_Dynamic_Index( IShaderDynamicAPI *pShaderAPI )
	{
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif // _DEBUG
		m_nPIXELFOGTYPE = ( pShaderAPI->GetSceneFogMode() == MATERIAL_FOG_LINEAR_BELOW_FOG_Z ) ;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllDynamicVarsDefined = m_bPIXELFOGTYPE;
		Assert( bAllDynamicVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nPIXELFOGTYPE ) + 0;
	}
};
#define shaderDynamicTest_globallitgeneric_ps30 0
