// eSpaceStatusEvent.cpp : CeSpaceStatusEvent µÄÊµÏÖ

#include "stdafx.h"
#include "eSpaceStatusEvent.h"
#include ".\espacestatusevent.h"


// CeSpaceStatusEvent



// CeSpaceStatusEvent
STDMETHODIMP CeSpaceStatusEvent::GetName(/*[out,retval]*/BSTR* pStrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return E_NOTIMPL;
}

STDMETHODIMP CeSpaceStatusEvent::GetIcon(/*[out,retval]*/BSTR* pStrPath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

    return E_NOTIMPL;
}


STDMETHODIMP CeSpaceStatusEvent::Initialize(/*[in]*/IDispatch* pFramework,/*[out,retval]*/VARIANT_BOOL* pbResult)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return E_NOTIMPL;
}

STDMETHODIMP CeSpaceStatusEvent::Create(/*[in]*/LONG hWndParent,/*[in]*/VARIANT_BOOL bPopupWindow,/*[out,retval]*/LONG* pHwndResult)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

    return E_NOTIMPL;
}

STDMETHODIMP CeSpaceStatusEvent::UnInitial(/*[out,retval]*/VARIANT_BOOL* pbResult)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())
    return E_NOTIMPL;
}

STDMETHODIMP CeSpaceStatusEvent::GetSafeHwnd(/*[out,retval]*/LONG* pHwndResult)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())
    return E_NOTIMPL;
}

STDMETHODIMP CeSpaceStatusEvent::Show(/*[in]*/VARIANT_BOOL bShow,/*[out,retval]*/VARIANT_BOOL* pbResult)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

    return E_NOTIMPL;
}

STDMETHODIMP CeSpaceStatusEvent::Destroy(/*[out,retval]*/VARIANT_BOOL* pbResult)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())
    return E_NOTIMPL;
}

STDMETHODIMP CeSpaceStatusEvent::SetWindowStyle(/*[in]*/VARIANT_BOOL bPopup,/*[out,retval]*/VARIANT_BOOL* pbResult)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

    return E_NOTIMPL;
}



STDMETHODIMP CeSpaceStatusEvent::DoNotify(/*[in]*/ ULONG eventID, /*[in]*/ IDispatch* pSender, /*[in]*/ ULONG ulParam1, /*[in]*/ ULONG ulParam2)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

    AfxMessageBox(_T("123"));


	return S_OK;
}

