========================================================================
    �ģ��� : eSpaceStatusCtrl ��Ŀ�ſ�
========================================================================

Ӧ�ó�����Ϊ����������� eSpaceStatusCtrl ��Ŀ����������
��д��̬���ӿ�(DLL)����㡣

���ļ�����
�����Ŀ��ÿ���ļ�������ժҪ��

eSpaceStatusCtrl.vcproj
    ������Ӧ�ó��������ɵ� VC++ ��Ŀ������Ŀ�ļ���
    �������й����ɴ��ļ��� Visual C++ �汾����Ϣ���Լ�
    �й�ʹ��Ӧ�ó�����ѡ���
    ƽ̨�����ú���Ŀ���ܵ���Ϣ��

eSpaceStatusCtrl.idl
    ���ļ�������Ŀ�ж�������Ϳ⡢
    �ӿں� co-class �� IDL ���塣
    ���ļ����� MIDL ����������������:
        C++ �ӿڶ���� GUID ����(eSpaceStatusCtrl.h)
        GUID ����(eSpaceStatusCtrl_i.c)
        ���Ϳ�(eSpaceStatusCtrl.tlb)
        ���ʹ������(eSpaceStatusCtrl_p.c and dlldata.c)

eSpaceStatusCtrl.h
    ���ļ������� eSpaceStatusCtrl.idl �ж������� C++
    �ӿڶ���� GUID �����������ڱ����ڼ��� MIDL �������ɡ�
eSpaceStatusCtrl.cpp
    ���ļ���������ӳ��� DLL ������ʵ�֡�
eSpaceStatusCtrl.rc
    ���ǳ���ʹ�õ����� Microsoft Windows ��Դ
    ���б�

eSpaceStatusCtrl.def
    ��ģ�鶨���ļ�Ϊ�������ṩ�й� DLL �����
    ��������Ϣ���������������ݵĵ���:
        DllGetClassObject  
        DllCanUnloadNow    
        GetProxyDllInfo    
        DllRegisterServer	
        DllUnregisterServer

/////////////////////////////////////////////////////////////////////////////
������׼�ļ�:

StdAfx.h��StdAfx.cpp
    ��Щ�ļ�����������Ϊ eSpaceStatusCtrl.pch
    ��Ԥ����ͷ(PCH)�ļ��Լ���Ϊ StdAfx.obj ��Ԥ���������ļ���

Resource.h
    ���Ƕ�����Դ ID �ı�׼ͷ�ļ���

/////////////////////////////////////////////////////////////////////////////
����ע��:

	MFC ֧��ѡ� Microsoft ����������ɵ���������Ӧ�ó����У�
	ʹ������ʹ�� MFC �ࡢ����ͺ�����
/////////////////////////////////////////////////////////////////////////////
