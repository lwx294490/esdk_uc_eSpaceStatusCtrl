// eSpaceStatusEvent.h : CeSpaceStatusEvent µÄÉùÃ÷

#pragma once
#include "resource.h"       // Ö÷·ûºÅ

#include "eSpaceStatusCtrl.h"


// CeSpaceStatusEvent

class ATL_NO_VTABLE CeSpaceStatusEvent : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CeSpaceStatusEvent, &CLSID_eSpaceStatusEvent>,
	public IDispatchImpl<IeSpaceStatusEvent, &IID_IeSpaceStatusEvent, &LIBID_eSpaceStatusCtrlLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CeSpaceStatusEvent()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ESPACESTATUSEVENT)


BEGIN_COM_MAP(CeSpaceStatusEvent)
	COM_INTERFACE_ENTRY(IeSpaceStatusEvent)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}
	
	void FinalRelease() 
	{
	}

public:

    STDMETHOD(Initialize)(/*[in]*/IDispatch* pFramework,/*[out,retval]*/VARIANT_BOOL* pbResult);
	STDMETHOD(UnInitial)(/*[out,retval]*/VARIANT_BOOL* pbResult);
	STDMETHOD(GetName)(/* [retval][out] */ BSTR *pStrName);
	STDMETHOD(GetIcon)(/* [retval][out] */ BSTR *pStrPath);
	STDMETHOD(Create)(/*[in]*/LONG hWndParent,/*[in]*/VARIANT_BOOL bPopupWindow,/*[out,retval]*/LONG* pHwndResult);
	STDMETHOD(GetSafeHwnd)(/*[out,retval]*/LONG* pHwndResult);
	STDMETHOD(Show)(/*[in]*/VARIANT_BOOL bShow,/*[out,retval]*/VARIANT_BOOL* pbResult);
	STDMETHOD(Destroy)(/*[out,retval]*/VARIANT_BOOL* pbResult);
	STDMETHOD(SetWindowStyle)(/*[in]*/VARIANT_BOOL bPopup,/*[out,retval]*/VARIANT_BOOL* pbResult);
	STDMETHOD(DoNotify)(/*[in]*/ ULONG eventID, /*[in]*/ IDispatch* pSender, /*[in]*/ ULONG ulParam1, /*[in]*/ ULONG ulParam2);

};

OBJECT_ENTRY_AUTO(__uuidof(eSpaceStatusEvent), CeSpaceStatusEvent)
