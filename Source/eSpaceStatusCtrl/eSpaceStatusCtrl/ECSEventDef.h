// common.h

// espaceframework event/////////////////////////
#define RETCODE_SUCCESS 0
#define RETCODE_ERROR -1
#define RETCODE_REFUSE -2
// P2P
#define EE_P2P_CHOOSE       100
#define EE_P2P_STOP         101
#define EE_P2P_START_RESULT 102
#define EE_P2P_STOP_RESULT  103
#define EE_P2P_PROGRESS     104
#define EE_P2P_VOLUMN       105
#define EE_P2P_RING         106
#define EE_P2P_ONHODE       107
#define EE_P2P_REQUEST_MUTEMIC 108

//���Ӷ�IM��Ϣ����֪ͨ����
#define EE_CHAT_SINGLE_ERROR 111
#define EE_CHAT_GROUP_ERROR  112
#define EE_CHAT_TEMPGROUP_ERROR 113
#define EE_CHAT_MULTIMEDIA_NOTIFY 114
#define EE_CHAT_SINGLE_ACK 115
#define EE_CHAT_TEMP_ACK   116
#define EE_CHAT_GROUP_ACK  117
#define EE_CHAT_TEMPGROUP_ACK 118
#define EE_CHAT_MULTIMEETINGS 119
#define EE_CHAT_SINGLE 120
#define EE_CHAT_TEMP   121
#define EE_CHAT_GROUP  122
#define EE_CHAT_TEMPGROUP 123
#define EE_CHAT_NOTIFY 124
#define EE_CHAT_STATUS 125
#define EE_CHAT_NOAUTH 126
#define EE_CHAT_NOTIFY2 127
#define EE_CHAT_AUDIOSTATUS_NOFITY 145

// ���������
//#define EE_CHAT_DISCUSSIONGROUP  145
//#define EE_CHAT_DISCUSSIONGROUP_ACK  146
//#define EE_CHAT_DISCUSSIONGROUP_ERROR  147
#define EE_DISCUSSION_NOTIFY 148

#define EE_APPDATA 130
#define EE_CHANGE_USERSTATUS 131 
#define EE_P2PDATA 132

#define EE_P2P_CHANNEL_TIMEOUT      128
#define EE_P2P_CHANNEL_PROGRESS     129
#define EE_P2P_CHANNEL_CHOOSE 133
#define EE_P2P_CHANNEL_STOP   134
#define EE_P2P_CHANNEL_START_RESULT 135
#define EE_P2P_CHANNEL_STOP_RESULT  136
#define EE_P2P_CHANNEL_STARTED      137
#define EE_P2P_CHANNEL_STOPED       138
#define EE_P2P_CHANNEL_ONDATA       139
#define EE_P2P_CHANNEL_ONNOTIFY     144

#define EE_SMS_RECEIVE 140
#define EE_SMS_SENDSUCCESS 141
#define EE_SMS_RECEIPT 142
#define EE_SMS_SENDFAIL 143
#define EE_SMS_RECEIPTFAIL 144

//#define EE_MENU_FRIENDLIST_GROUP 150
//#define EE_MENU_FRIENDLIST_USER 151
//#define EE_MENU_FRIENDLIST_DEFAULT 152



#define EE_MENU_CONTACTLIST_FRIEND 150
#define EE_MENU_CONTACTLIST_GROUP 151
#define EE_MENU_CONTACTLIST_CONTACT 152
#define EE_MENU_CONTACTLIST_DEFAULT 153

#define EE_CONTACTLIST_DBCLICK_FRIEND 154
#define EE_CONTACTLIST_DBCLICK_CONTACT 155
#define EE_MENU_IMGROUP_GROUP 158
#define EE_MENU_IMGROUP_USER 159
#define EE_MENU_IMGROUP_DEFAULT 160
#define EE_MENU_IMGROUP_USER_DBCLICK 161
#define EE_MENU_IMGROUP_GROUP_DBCLICK 162

#define EE_MENU_DEPTLIST_DEPT 163
#define EE_MENU_DEPTLIST_USER 164
#define EE_DEPTLIST_DBCLICK 165

#define EE_MENU_MULTISELECTED 166
#define EE_GET_CLIENTTYPE 167
/*******************///wkf39030   IPPhone״̬
#define EE_IPPHONE_STATUS 168
#define EE_CONTACTLIST_STARTCALL_CONTACT 156
/*******************///wkf39030   IPPhone״̬

#define EE_SIP_MSG_REGISTER_OK            0       // 0 ע��ɹ�
#define EE_SIP_MSG_REGISTER_FORBIDDEN     1       // 1 ��ֹע��(403)
#define EE_SIP_MSG_REGISTER_FAILURE       2       // 2 ע��ʧ��
#define EE_SIP_MSG_UNREGISTERED           3       // 3 �Ѿ�ע��

#define EE_SIP_MSG_CALL_START             4       // 3 ��ʼ����
#define EE_SIP_MSG_CALL_RING              5       // 4 �Է�����
#define EE_SIP_MSG_CALL_RING_NO_SDP       6       // 4 �Է�����,û��SDP
#define EE_SIP_MSG_CALL_ANSWER            7               // 5 �Է�ժ��,����Ƶ
#define EE_SIP_MSG_CALL_REJECT            8              // 6 �Է��ܾ�
#define EE_SIP_MSG_CALL_NO_ANWSER         9           // 7 �Է���Ӧ��
#define EE_SIP_MSG_CALL_BUSY              10             // 8 �Է�æ
#define EE_SIP_MSG_CALL_BYE               11           // 9 �һ��������ֹ
#define EE_SIP_MSG_INCOMING_CALL          12            // 10������
#define EE_SIP_MSG_CALL_TREM              13            // 10���б���ֹ
#define EE_SIP_MSG_INCOMING_VIDEOCALL     14            // 10����Ƶ����

#define EE_SIP_MSG_CTD_ANSWER             15               // 11�ɹ�
#define EE_SIP_MSG_CTD_NO_ANSWER          16            // 12��Ӧ��
#define EE_SIP_MSG_CTD_BUSY               17                 // 13æ
#define EE_SIP_MSG_CTD_REJECT             18               // 14�ܾ�

#define EE_SIP_MSG_FORWARD_OK             19               // 15����ǰת�ɹ�
#define EE_SIP_MSG_FORWARDING             20               // 16����ת����
#define EE_SIP_MSG_FORWARD_FAILURE        21          // 17����ǰתʧ��

#define EE_SIP_MSG_CONF_START             22               // 18���鿪ʼ
#define EE_SIP_MSG_CONF_END               23                 // 19������� 
#define EE_SIP_MSG_CONF_FAIL              24                // 20��������ʧ��
#define EE_SIP_MSG_CONF_COMPERE_COME      25        // 21�����˽��ᣬ�ص�������caller��������
#define EE_SIP_MSG_CONF_COMPERE_LEAVE     26       // 22�������뿪���ص�������caller��������
#define EE_SIP_MSG_CONF_COME              27                // 23����߼�����飬�ص�������caller�������
#define EE_SIP_MSG_CONF_LEAVE             28               // 24������뿪���飬�ص�������caller�������
#define EE_SIP_MSG_CONF_TALKING_ENABLED   29     // 25����ߵõ�����Ȩ���ص�������caller�������
#define EE_SIP_MSG_CONF_TALKING_DISABLED  30    // 26�����ʧȥ����Ȩ���ص�������caller�������   
#define EE_SIP_MSG_CONF_ADD_FAIL          31            // 27���������ʧ��
#define EE_SIP_MSG_CONF_DEL_FAIL          32              // 28�߳������ʧ��
#define EE_SIP_MSG_CONF_SPK_FAIL          33            // 29������/��ֹ����ʧ��
#define EE_SIP_MSG_CONF_ADD_INCOMING_FAIL 34   // 30������������ʧ��
#define EE_SIP_MSG_CONF_INVITE            35   // 30������������ʧ��
#define EE_SIP_MSG_CONF_ADD_SUCCESS       36   // 30������������ʧ��
#define EE_SIP_MSG_CONF_ADD_FAILED        37   // 30������������ʧ��

#define EE_SIP_MSG_ERR_PORT_USED          42      // 35 SIP�˿ڱ�����Ӧ��ռ�ã����������Ӧ��Ӧ���˳����С�
#define EE_SIP_MSG_KICKOUT                43    // 36 �Ѿ�ע��

#define EE_SIP_GETFORWARDNO               178    // ��ȡǰת����
#define EE_SIP_SETFORWARDNO               179    // ����ǰת����

//it����
#define EE_HOTLINE_HELPACK              180    // ������Ӧ���ֱ�Կͷ�����������Ӧ��
#define EE_HOTLINE_ENDHOTLINE           181   // �������߷��񣨰���ȡ�������Ŷӣ�
#define EE_HOTLINE_HELPQUEUESTATUS      182    //�Ŷ�״̬

#define EE_P2P_ERR_TARGET_OFFLINE      (-104)
#define EE_P2P_ERR_TIMEOUT             (-100)
#define EE_P2P_ERR_SELF_BUSY           (-110)
#define EE_P2P_ERR_NOT_P2P_REPLY       (-111)
#define EE_P2P_ERR_PEER_REJECT         (-112)
#define EE_P2P_ERR_PEER_BUSY           (-113)
#define EE_P2P_ERR_UNKNOWN_REPLY       (-114)
#define EE_P2P_ERR_NOT_TALKING_WITH    (-115)
#define EE_P2P_ERR_NO_REQUEST_FROM     (-116)
#define EE_P2P_ERR_NO_FILE_TO_SEND     (-117)
#define EE_P2P_ERR_STARTTALK_ERROR     (-118)
#define EE_P2P_ERR_ACCEPTTALK_ERROR    (-119)
#define EE_P2P_ERR_SENDFILE_ERROR      (-120)
#define EE_P2P_ERR_ACCEPTFILE_ERROR    (-121)
#define EE_P2P_ERR_OPEN_FILE_ERROR     (-122)
#define EE_P2P_ERR_NOT_INCOMING        (-123)
#define EE_P2P_ERR_CANCELLED           (-124)
#define EE_P2P_ERR_FILE_BUSY           (-125)
#define EE_P2P_ERR_SERECTLEVEL         (-126)
#define EE_P2P_ERR_FILE_STOPPED        (-127)
#define EE_P2P_ERR_FILE_IS_EMPTY       (-128)
#define EE_P2P_ERR_START_APP_ERROR     (-129)
#define EE_P2P_ERR_ACCEPT_APP_ERROR    (-130)
#define EE_P2P_ERR_FUTURE_RESULT       (-131)
#define EE_P2P_ERR_COMMMODE_MISMATCH   (-132)
#define EE_P2P_ERR_AUDIO_NO_AUTH	   (-133)
#define EE_P2P_ERR_VIDEO_NO_AUTH	   (-134)
#define EE_P2P_ERR_PEER_IGNORE		   (-135)
//////////////////////////////////////////////////////////////////////////
// function : TrayIcon notify event
// vParam1 : it contains the identifier of the windows "taskbar" icon in which the event occurred. 
// vParam2 : it holds the mouse or keyboard message associated with the event. 
// vParam3 : it specify the current tray icon id that return by IECSMainWindow::AddTrayIcon.
#define EE_TRAYICON_NOTIFY 250

#define EE_LOADALLPLUGIN 251

#define EE_LOADALLDATA 252 //�ͻ��˼���������Ϣ
//////////////////////////////////////////////////////////////////////////
// function : click tip event of message tip dialog.
// vParam1 : it contains the current message tip id value.
#define EE_MSGTIPDLG_CLICK_TIP 260

//��ʾ�绰��ʷ��¼
#define EE_HISTORY_SHOW_TEL 261
//��ʾ������ʷ��¼
#define EE_HISTORY_SHOW_SMS 262
//��ʾ������ʷ��¼
#define EE_HISTORY_SHOW_MMS 263

#define ECS_SET_MISS_NUMBER_INIT 700

//////////////////////////////////////////////////////////////////////////
//Notify CFrame Event Define
#define EE_EVENT_BEGIN (500)
//////////////////////////////////////////////////////////////////////////
//eventID - ECS_PLUGIN_CREATE_EVENT
//pSender - specified the event send from which plugIn.
//ulParam1 - NULL.
//ulParam2 - NULL.
#define EE_PLUGIN_CREATE_EVENT ( EE_EVENT_BEGIN + 0 )
//////////////////////////////////////////////////////////////////////////
//eventID - ECS_PLUGIN_CREATE_EVENT
//pSender - specified the event send from which plugIn.
//ulParam1 - NULL.
//ulParam2 - NULL.
#define EE_PLUGIN_DESTROY_EVENT ( EE_EVENT_BEGIN + 1 )
//////////////////////////////////////////////////////////////////////////
//eventID - ECS_FRAME_CHANG_EVENT.
//pSender - NULL, reserved.
//ulParam1 - new Frame state.
//ulParam2 - old Frame state.
#define EE_FRAME_CHANG_EVENT ( EE_EVENT_BEGIN + 2 )
//////////////////////////////////////////////////////////////////////////


#define EE_PLUGIN_MINIMIZE_EVENT ( EE_EVENT_BEGIN + 3 )

//֪ͨ������׼���ر�
#define EE_CLOSE_EVENT ( EE_EVENT_BEGIN + 4 )

//����������ܹر�
#define EE_PLUGIN_DONOT_CLOSE_EVENT ( EE_EVENT_BEGIN + 5 )

//ͬ��ĳIMȺ����Ϣ�¼�
#define EE_FINISH_SYNCGROUPINFO_EVENT ( EE_EVENT_BEGIN + 6 )

//ͬ��ĳIMȺ��Ա�¼�
#define EE_FINISH_SYNCGROUPMEMBERS_EVENT ( EE_EVENT_BEGIN + 7 )

//ɾ��Ⱥ���¼�
#define EE_FINISH_REMOVEIMGROUP_EVENT ( EE_EVENT_BEGIN + 8 )

//�ͻ���ͬ����ɺ�֪ͨ��Ϣ
#define EE_FINISH_SYNC_EVENT ( EE_EVENT_BEGIN + 9 )


//ˢ��IMͷ��
#define EE_REFLESH_IMAGE (EE_EVENT_BEGIN + 10)


/*f00152768 add ֪ͨIM���ڵ���˲����� 2010-12-3*/
#define EE_CLICK_NUMENTER_EVENT (EE_EVENT_BEGIN + 11)
/*end*/
/*f00152768 add ֪ͨIM���ڵ���˲����� 2010-12-3*/
#define EE_KEYBOARD_DISPALY_EVENT (EE_EVENT_BEGIN + 12)
/*end*/

/*BEGIN : Added by mKF42992 at 2011-6-13 10:02:43*/
/** ֪ͨIM�ر�"im.db"�ļ� */
#define EE_CLOSE_IM_DB (EE_EVENT_BEGIN + 13)

/** ֪ͨIM�ر�"meeting.db"�ļ� */
#define EE_CLOSE_MEETING_DB (EE_EVENT_BEGIN + 14)

/** ֪ͨSMS�ر�"sms.db"�ļ� */
#define EE_CLOSE_SMS_DB (EE_EVENT_BEGIN + 15)
/*END : Added by mKF42992 at 2011-6-13 10:02:43*/

#define EE_CLOSE_IM_DB_ARCHIVE (EE_EVENT_BEGIN + 16)

#define EE_CLOSE_MEETING_DB_ARCHIVE (EE_EVENT_BEGIN + 17)

#define EE_CLOSE_SMS_DB_ARCHIVE (EE_EVENT_BEGIN + 18)

#define EE_CLOUD_MEDIA_MODE_CHANGE (EE_EVENT_BEGIN + 19)

/** ����ر�����ͨ����Ϣ */
#define EE_CLOSE_CALLING (EE_EVENT_BEGIN + 20)

#define EE_IMAINWINDOW_USERSTATUS ( EE_EVENT_BEGIN +  21 )
/*******************///wkf39030   IPPhone״̬
#define EE_IMAINWINDOW_IPPHONESTATUS ( EE_EVENT_BEGIN +  22 )

#define EE_IMAINWINDOW_TRAYICON_NOTIFY ( EE_EVENT_BEGIN +  23 )

#define EE_PLUGIN_RESTORE_EVENT ( EE_EVENT_BEGIN + 41 )

#define EE_MSG_TRANSMIT_NOTIFY ( EE_EVENT_BEGIN + 42 )

#define EE_CLOSE_GROUPWIN_WHEN_EXIT (EE_EVENT_BEGIN + 50)

#define EE_DELETE_GROUP_MEMBER_IN_SHOWING_WINDOW (EE_EVENT_BEGIN + 51)

#define EE_FINISH_SYNC_EVENT_USERINFO (EE_EVENT_BEGIN + 52)
/** ����̶�Ⱥ���Ա������Ϣ *///wkf39030 ���ⵥDTS2011082306482 
#define EE_ADD_GROUP_MEMBER_IN_SHOWING_WINDOW (EE_EVENT_BEGIN + 53)
//����IPPHONE������Ϣ
#define EE_IPPHONE_SET_USESTATUS ( EE_EVENT_BEGIN + 54 )

/** \brief ��ȡWebcc����Ϣ */
#define EE_GET_WEBCC_INFO (EE_EVENT_BEGIN + 55)

#define ECS_CLIPBORAD_FORMAT_STRING _T("{C4446E2A-0FA0-4ff7-A033-00E24EC4E85F}")
//

//ˢ���û�������Ϣ
#define EE_REFLESH_USERINFO (EE_EVENT_BEGIN + 24)

//֪ͨ������׼���ر�
#define EE_KICKOUT_EVENT ( EE_EVENT_BEGIN + 25 )

//------------------�ڲ�ʹ��------------------------------------------

//msg - ECS_MSG_TRANSMIT_NOTIFY
//wParam - specified the notify event id 
//lParam - specified the "ulParam1" parameter in DoNotify function.
//////////////////////////////////////////////////////////////////////////
//eventID - ECS_PLUGIN_RESTORE_EVENT
//pSender - specified the event send from which plugIn.
//ulParam1 - NULL.
//ulParam2 - NULL.


////eventID - ECS_SIPMSG_INCOMING_ANSWER_EVENT
//pSender - NULL, reserved.
//ulParam1 - specified the point of caller name.
//ulParam2 - specified the call id.
//////////////////////////////////////////////////////////////////////////
//eventID - ECS_IM_WANT_TO_SHOW_UI_EVENT
//pSender - NULL.
//ulParam1 - NULL.
//ulParam2 - NULL.
//////////////////////////////////////////////////////////////////////////
//eventID - ECS_IMAINWINDOW_TRAYICON_NOTIFY
//pSender - NULL
//ulParam1 - NULL
//ulParam2 - NULL
//remark : CMainWindow will receive the event, when trayicon receive msg.

/*******************///wkf39030   IPPhone״̬
//eventID - ECS_MSGTIPDLG_CLICK_TIP
//pSender - NULL
//ulParam1 - specified the current MsgTipID
//ulParam2 - NULL
//remark : 
//#define EE_MSGTIPDLG_CLICK_TIP ( EE_EVENT_BEGIN +  30 )
//////////////////////////////////////////////////////////////////////////
//eventID - ECS_TEL_WANT_TO_CREATE_NOTIFYBAR
//
//


#define IMDB_MSG_ADDCHATRECORD				1
#define IMDB_MSG_ADDTEMPCHATCONTACT			2
#define IMDB_MSG_ADDGROUPCHATRECORD			3
#define IMDB_MSG_ADDORUPDATECHATGROUP		4
#define IMDB_MSG_ADDHOTLINECHATCONTACT		5
#define IMDB_MSG_ADDSIPRECORD				6
#define MEETINGDB_MSG_ADDCONFRECORD			7
#define MEETINGDB_MSG_ADDATTENDERRECORD		8
