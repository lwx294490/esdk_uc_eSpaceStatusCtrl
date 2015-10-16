// StatusCtrl.h : CStatusCtrl ������
#pragma once
#include "resource.h"       // ������
#include <atlctl.h>
#include "eSpaceStatusCtrl.h"
#include "_IStatusCtrlEvents_CP.h"
#include "TEventHandler.h"
#include "eSDKTool.h"

#define REQ_ASYN_GET_STATUS	(WM_APP + 1)	//�����첽��ȡ״̬

#define ECS_MENU_BEGIN 10000
#define ECS_IM_MENU					(ECS_MENU_BEGIN + 1)
#define ECS_CALL_MENU				(ECS_MENU_BEGIN + 2)
#define ECS_MEETING_MENU			(ECS_MENU_BEGIN + 3)
#define ECS_ADDTOFRIEND_MENU		(ECS_MENU_BEGIN + 4)
#define ECS_CALLPCTOPC_MENU			(ECS_MENU_BEGIN + 5)
#define ECS_CALLSIPMOBILE_MENU		(ECS_MENU_BEGIN + 6)
#define ECS_CALLSIPHOMEPHONE_MENU	(ECS_MENU_BEGIN + 7)
#define ECS_CALLSIPOFFICEPHONE_MENU (ECS_MENU_BEGIN + 8)
#define ECS_CALLSIPSHORTPHONE_MENU	(ECS_MENU_BEGIN + 9)
#define ECS_CALLSIPOTHERPHONE_MENU	(ECS_MENU_BEGIN + 10)
#define ECS_CALLSIPIPPHONE1_MENU	(ECS_MENU_BEGIN + 11)
#define ECS_STARTESPACE_MENU		(ECS_MENU_BEGIN + 12)

namespace ecs{
namespace statusctrl{
    //StatusCtrl�����룬��W3 PortalԼ��
        const static int ERROR_CLIENT_NOTINSTALLED = -1;//�ͻ���û����ȷ����װ
        const static int ERROR_CLIENT_STARTIMERROR = -2;//������ʱ��Ϣʧ��
        const static int ERROR_CLIENT_STARTCALLERROR = -3;//��������ʧ��
        const static int ERROR_CLIENT_STARTADDTOCONTACTERROR = -4;//������Ӻ���ʧ��
        const static int ERROR_CLIENT_STARTSTATUSERROR = -5;//��ȡ״̬ʧ��
        const static int ERROR_CLIENT_STARTMEETINGERROR = -6;//��������ʧ��
        const static int ERROR_CLIENT_STARTLOINGERROR = -7;//������¼ʧ��
}
}

class CStatusCtrl;
typedef TEventHandler<CStatusCtrl, eSpace::IECSEspaceApp> IECSExternEventHandler;

// CStatusCtrl
class ATL_NO_VTABLE CStatusCtrl : //IObjectSafetyImpl
	public CComObjectRootEx<CComMultiThreadModel>,
	public IDispatchImpl<IStatusCtrl, &IID_IStatusCtrl, &LIBID_eSpaceStatusCtrlLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IPersistStreamInitImpl<CStatusCtrl>,
	public IOleControlImpl<CStatusCtrl>,
	public IOleObjectImpl<CStatusCtrl>,
	public IOleInPlaceActiveObjectImpl<CStatusCtrl>,
	public IViewObjectExImpl<CStatusCtrl>,
	public IOleInPlaceObjectWindowlessImpl<CStatusCtrl>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CStatusCtrl>,
	public CProxy_IStatusCtrlEvents<CStatusCtrl>, 
	public IObjectWithSiteImpl<CStatusCtrl>,
	public IServiceProviderImpl<CStatusCtrl>,
	public IPersistStorageImpl<CStatusCtrl>,
	public ISpecifyPropertyPagesImpl<CStatusCtrl>,
	public IQuickActivateImpl<CStatusCtrl>,
	public IDataObjectImpl<CStatusCtrl>,
	public IProvideClassInfo2Impl<&CLSID_StatusCtrl, &__uuidof(_IStatusCtrlEvents), &LIBID_eSpaceStatusCtrlLib>,
	public IPropertyNotifySinkCP<CStatusCtrl>,
	public CComCoClass<CStatusCtrl, &CLSID_StatusCtrl>,
	public CComControl<CStatusCtrl>,
    public IObjectSafetyImpl<CStatusCtrl, 
                        INTERFACESAFE_FOR_UNTRUSTED_CALLER | 
                        INTERFACESAFE_FOR_UNTRUSTED_DATA>

{
private:
    //TODO:Ҫ��һ�����ʵĵط�ע��˵�
    CComPtr<IDispatch> m_spCallback;//״̬�ı�ص���JS�Ľӿ�
    CComPtr<IDispatch> m_spEventCallback;//ECS�¼��ص���JS�Ľӿ�
	std::auto_ptr<IECSExternEventHandler>  m_eventHandler;//�ؼ���Ӧ�Ļص��¼�������

public:

    CStatusCtrl():m_strAccount("")
		,m_strStaffNO(static_cast< LPCOLESTR>(NULL))
		,m_strName(static_cast< LPCOLESTR>(NULL))
		,m_iStatus(0)
		,m_iClientType(0)
		,m_strBindNo(static_cast< LPCOLESTR>(NULL))
		,m_strMobile(static_cast< LPCOLESTR>(NULL))
		,m_strHomePhone(static_cast< LPCOLESTR>(NULL))
		,m_strOfficePhone(static_cast< LPCOLESTR>(NULL))
		,m_strShortPhone(static_cast< LPCOLESTR>(NULL))
		,m_strOtherPhone(static_cast< LPCOLESTR>(NULL))
		,m_strIPPhone1(static_cast< LPCOLESTR>(NULL))
		,m_eventHandler(NULL)//,m_hIEServerWnd(0)
		,m_HWnd(NULL)
	{
		InitializeCriticalSection(&g_cs);
	}

	~CStatusCtrl()
	{
		DeleteCriticalSection(&g_cs);
	}
DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE | 
	OLEMISC_CANTLINKINSIDE | 
	OLEMISC_INSIDEOUT | 
	OLEMISC_ACTIVATEWHENVISIBLE | 
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_STATUSCTRL)

BEGIN_COM_MAP(CStatusCtrl)
	COM_INTERFACE_ENTRY(IStatusCtrl)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY(IQuickActivate)
	COM_INTERFACE_ENTRY(IPersistStorage)
	COM_INTERFACE_ENTRY(IDataObject)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	COM_INTERFACE_ENTRY(IObjectWithSite)
	COM_INTERFACE_ENTRY(IServiceProvider)
    COM_INTERFACE_ENTRY(IObjectSafety)
END_COM_MAP()

BEGIN_PROP_MAP(CStatusCtrl)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// ʾ����
	// PROP_ENTRY("Property Description", dispid, clsid)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CStatusCtrl)
	CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
	CONNECTION_POINT_ENTRY(__uuidof(_IStatusCtrlEvents))
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CStatusCtrl)
    MESSAGE_HANDLER(WM_LBUTTONDOWN, OnLButtonDown)
	MESSAGE_HANDLER(WM_MOUSEMOVE, OnMouseMove)
	MESSAGE_HANDLER(REQ_ASYN_GET_STATUS,OnReqAsynGetStatus)	
    MESSAGE_HANDLER(WM_PAINT, OnPaint)
    CHAIN_MSG_MAP(CComControl<CStatusCtrl>)
    COMMAND_ID_HANDLER(ECS_IM_MENU , OnClickIMMenu)
    COMMAND_ID_HANDLER(ECS_CALL_MENU , OnClickCallMenu)
    COMMAND_ID_HANDLER(ECS_MEETING_MENU , OnClickMeetingMenu)
    COMMAND_ID_HANDLER(ECS_ADDTOFRIEND_MENU , OnClickAddFriendMenu)
    COMMAND_ID_HANDLER(ECS_CALLPCTOPC_MENU , OnClickCallPcToPcMenu)
	COMMAND_ID_HANDLER(ECS_CALLSIPMOBILE_MENU , OnClickCallSIPMobileMenu)
	COMMAND_ID_HANDLER(ECS_CALLSIPHOMEPHONE_MENU , OnClickCallSIPHomePhoneMenu)
	COMMAND_ID_HANDLER(ECS_CALLSIPOFFICEPHONE_MENU , OnClickCallSIPOfficePhoneMenu)
	COMMAND_ID_HANDLER(ECS_CALLSIPSHORTPHONE_MENU , OnClickCallSIPShortPhoneMenu)
	COMMAND_ID_HANDLER(ECS_CALLSIPOTHERPHONE_MENU , OnClickCallSIPOtherPhoneMenu)
	COMMAND_ID_HANDLER(ECS_CALLSIPIPPHONE1_MENU , OnClickCallSIPIPPhone1Menu)
	COMMAND_ID_HANDLER(ECS_STARTESPACE_MENU , OnClickStarteSpaceMenu)
	
    
END_MSG_MAP()
// �������ԭ��: 
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

BEGIN_SINK_MAP(CStatusCtrl)
	//��ȷ���¼���������� __stdcall ����Լ��
END_SINK_MAP()

	//STDMETHOD(OnAmbientPropertyChange)(DISPID dispid)
	//{
	//	if (dispid == DISPID_AMBIENT_BACKCOLOR)
	//	{
	//		SetBackgroundColorFromAmbient();
	//		FireViewChange();
	//	}
	//	return IOleControlImpl<CStatusCtrl>::OnAmbientPropertyChange(dispid);
	//}
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		static const IID* arr[] = 
		{
			&IID_IStatusCtrl,
		};

		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IStatusCtrl

	enum { IDD = IDD_STATUSCTRL };
	STDMETHOD(_InternalQueryService)(REFGUID guidService, REFIID riid, void** ppvObject)
	{
        CComPtr<IOleClientSite> pocs;
        GetSite(IID_IOleClientSite,(void**)&pocs);

        CComPtr<IServiceProvider> sp;
        if (m_spUnkSite)
        {
            m_spUnkSite->QueryInterface(IID_IServiceProvider, (void**)&sp);
        }

        if (sp)
        {
            sp->QueryService(guidService, riid,  ppvObject);
        }

		return S_OK;
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	// ���� %appdata%\\eSpace_Desktop\\ ��
	std::string GetAppDataDirA()
	{
		static std::string writeableDir;
		if ( !writeableDir.empty() )
		{
			return writeableDir;
		}

		char path[MAX_PATH+1] = {0};
		std::string configFilePath = ("%appdata%\\eSpace_Desktop\\");


		//��չ��������
		char expandArray[MAX_PATH+1] = {0};
		::ExpandEnvironmentStringsA(configFilePath.c_str(), expandArray, MAX_PATH);

		writeableDir = expandArray;
		if ( !PathFileExistsA(writeableDir.c_str()) )
		{
			SHCreateDirectoryExA(NULL, writeableDir.c_str(), NULL);
		}
		return writeableDir;
	}

	HRESULT FinalConstruct()
	{
		//��ʼ����־
		std::string path;
		eSDKTool::getCurrentPath(path);
		std::string strLogCfgFile = path+"\\eSDKClientLogCfg.ini";
		std::string strLogStorePath = GetAppDataDirA()+"\\eSDKLog";
		unsigned int logLevel[LOG_CATEGORY] = {INVALID_LOG_LEVEL,INVALID_LOG_LEVEL,INVALID_LOG_LEVEL};
		LogInit(PRODUCT_NAME,strLogCfgFile.c_str(),logLevel,strLogStorePath.c_str());
		INFO_TRACE("");
		return S_OK;
	}
	
	void FinalRelease() 
	{
		{
			INFO_TRACE("");
		}
		LogFini(PRODUCT_NAME);	
		
	}

    

    /************************************************************************************
    Function:       // void FireECSEvent
    Description:    // ���¼��׸�JS��JSȥ����
    Calls:          // 
    Called By:      // 
    Input:          // 
    :               // int eventID -
    Output:         // 
    Return:         // int eventID
    Others:         //
    **************************************************************************************/
    void FireECSEvent(int eventID);


    /************************************************************************************
    Function:       // GetECSFramework
    Description:    // ��ȡ�ͻ��˿�ܽӿڣ�����ɹ��ḳֵ��m_ComeSpaceAPP
    Calls:          // 
    Called By:      // 
    Input:          // 
    Output:         // 
    Return:         // bool ��ȡ�ͻ��˿�ܽӿ��Ƿ�ɹ�
    Others:         // ���ʧ�ܣ����׳�ERROR_CLIENT_NOTINSTALLED�¼�
    **************************************************************************************/
    bool GetECSFramework();

    /************************************************************************************
    Function:       // CallOut
    Description:    // ���ÿͻ����ṩ�ĺ�������
    Calls:          // 
    Called By:      // 
    Input:          // 
    :               // BSTR phoneNum - �绰����
    Output:         // 
    Return:         // void
    Others:         //
    **************************************************************************************/
    void CallOut(BSTR phoneNum, BSTR account, BSTR name);

	/************************************************************************************
    Function:       // OnEventOccured
    Description:    // eSpace.exe����֪ͨ��Ϣ����COM����
    Calls:          // 
    Called By:      // 
    Input:          // 
    Output:         // 
    Return:         // 
    Others:         // 
    **************************************************************************************/
	HRESULT OnEventOccured//�¼��������
		(
		eSpace::ECSEventType eventId,
		const _variant_t & param1,
		const _variant_t & param2,
		const _variant_t & param3
		);

	/************************************************************************************
    Function:       // NotifyStatusChange
    Description:    // ֪ͨĳ���˻���״̬
    Calls:          // 
    Called By:      // 
    Input:          // 
    :               // BSTR account - uc�˻�
	:               // LONG status  - uc״̬
    Output:         // 
    Return:         // void
    Others:         //
    **************************************************************************************/
    void NotifyStatusChange(BSTR account, LONG status, LONG clientType);

    //�ͻ��˿�ܽӿ�
	CComPtr<eSpace::IECSEspaceApp> m_ComeSpaceAPP;
	//�ͻ�����ϵ�˹���ӿ�
	CComPtr<eSpace::IECSContactMgr> m_ComContactMgr;
    
    //����img ID���ʺŵĶ�Ӧ��ϵ������ص���JS
	std::multimap<CString, CString> m_mapIDAccount;

    //�ʺţ��ͻ�������
    std::map<CString, int> m_mapAccountType;

    //JS�������ĵ�ǰѡ����Ա���ʺ�
    CComBSTR m_strAccount,g_strAccout;
    //JS�������ĵ�ǰѡ����Ա�Ĺ���
    CComBSTR m_strStaffNO;
    //JS�������ĵ�ǰѡ����Ա������
    CComBSTR m_strName;
    LONG m_iStatus;
    LONG m_iClientType; // 0��ʾPC��1��ʾ�ƶ���2 IPPHone��3 Mobile
	short m_uIsFriend;

	HWND m_HWnd;

	//�󶨺��롢�ֻ�����ͥ�绰���칫�绰���̺š������绰
	CComBSTR m_strBindNo;
	CComBSTR m_strMobile;
	CComBSTR m_strHomePhone;
	CComBSTR m_strOfficePhone;
	CComBSTR m_strShortPhone;
	CComBSTR m_strOtherPhone;
	CComBSTR m_strIPPhone1;
	CRITICAL_SECTION g_cs;

    //�˵��¼�
    LRESULT OnClickIMMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
    LRESULT OnClickCallPcToPcMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
    LRESULT OnClickCallMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
    LRESULT OnClickMeetingMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
    LRESULT OnClickAddFriendMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnClickCallSIPMobileMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnClickCallSIPHomePhoneMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnClickCallSIPOfficePhoneMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnClickCallSIPShortPhoneMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnClickCallSIPOtherPhoneMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnClickCallSIPIPPhone1Menu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnClickStarteSpaceMenu(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
    //................    
   
    LRESULT OnLButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnMouseMove(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnReqAsynGetStatus(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

	STDMETHOD(ShowUI)(VARIANT_BOOL bShow, ULONG x, ULONG y);
    STDMETHOD(get_OnUserStatusChange)(VARIANT* pVal);
    STDMETHOD(put_OnUserStatusChange)(VARIANT newVal);
  
    STDMETHOD(GetStatus)(BSTR account, BSTR id);
    STDMETHOD(SetUserInfo)(BSTR strAccount, BSTR staffNo, BSTR strName, LONG status);
    STDMETHOD(get_OneSpaceEvent)(VARIANT* pVal);
    STDMETHOD(put_OneSpaceEvent)(VARIANT newVal);
    LRESULT OnPaint(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

    bool iseSpaceExist();

    HRESULT OnDraw(ATL_DRAWINFO& di);

    STDMETHOD(Login)(BSTR account, BSTR pwd, LONG type);

	//IE�ڳ�ʼ�������˳�ҳ���ʱ������ҳ���е�ActiveX�ؼ���IOleObject::SetClientSite��ʵ��
	//���ۿؼ��Ƿ񱻱��ؼ��
	//�ڳ�ʼ��ҳ���ʱ�򣬴��ݵ�ָ����������IOleClientSite �ӿ�ָ��;
	//���뿪���߹ر�ҳ���ʱ�򣬴��ݵ�ָ���ǿ�ָ�롣
	//���Ը������ָ�����жϿؼ���״̬������ִ�г�ʼ����������Ĵ��롣
	//CMyControl is derived from CComControl   
    STDMETHOD(SetClientSite)(IOleClientSite *pClientSite)   
    {   
		if(pClientSite)   
		{   
			RECT rc = {0,0,0,0};
			//   Don't   have   access   to   the   container's   window   so   just   use   the   
			//   desktop.     Window   will   be   resized   correctly   during   in-place   
			//   activation.   
			HWND hWnd = CreateControlWindow(::GetDesktopWindow(), rc);   
			m_HWnd = hWnd;
			_ASSERT(hWnd);   
		}
		return   IOleObjectImpl<CStatusCtrl>::SetClientSite(pClientSite);   
    }   
    
	HRESULT   InPlaceActivate(LONG   iVerb,   const   RECT*   prcPosRect)   
	{
		//Get the container's window.   
		_ASSERT(m_spClientSite);   
		CComPtr<IOleInPlaceSite>  pInPlaceSite;
		HRESULT	hr	=	m_spClientSite->QueryInterface(IID_IOleInPlaceSite, (void **)&pInPlaceSite);   
		if(SUCCEEDED   (hr)   &&   pInPlaceSite)
		{
			HWND   hParent   =   NULL;
			hr   =   pInPlaceSite->GetWindow(&hParent);
			if(SUCCEEDED   (hr)   &&   hParent)
			{
				//Set   container   window   as   our   parent   window   
				SetParent(hParent);   
			}
		}

		return   CComControlBase::InPlaceActivate(iVerb,   prcPosRect);   
	}

	HWND GetHWnd(void) {return m_HWnd;}

	void GetNumByAccount();

};

OBJECT_ENTRY_AUTO(__uuidof(StatusCtrl), CStatusCtrl)