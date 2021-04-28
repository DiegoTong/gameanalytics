#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t7570552C35A220ADB9666809E4D57E4C10713634;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativePlayer[]>
struct Action_1_t51C532112FFD613E8AE78C12C4B29AE2ABBB2771;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>
struct Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse>
struct Action_1_t8107018B60B62406C34FC151AE2FA83AB7B8BAE6;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>
struct Action_2_t41314D780C99FC8FB674545B1779785C340CCE10;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.PInvoke.BaseReferenceHolder>
struct Dictionary_2_t8A96942823873BB2FA7C3135BF04E0E5358721E3;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>
struct Dictionary_2_tF013E192C8D273F30EA0D1F7162FE154A9EBE4E0;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7;
// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.NativeEvent>
struct Func_2_t626AFBDFB13D2E3FC28DA467DC69E7297AD81E7F;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.IntPtr>
struct Func_2_t68709FCADCB728E9724D25398C64385F708C58B0;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String>
struct Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean>
struct Func_2_t8C733463CDB10E4A9763E291D32F4EF4236D19F5;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String>
struct Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4;
// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2;
// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativePlayer>
struct Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F;
// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata>
struct Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527;
// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899;
// System.Func`2<System.UIntPtr,System.Object>
struct Func_2_t34579A35D0D2AC2DB950492D4C4A7E21F6BB24C3;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct IEnumerable_1_t1929B43991005BD32B7768B8CC15718CE0E24C01;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata>
struct IEnumerable_1_tF40CD9F3F79CE1BF9DC01397ED4DB5CC51E5119C;
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct IEnumerable_1_t085544243B679A6E39B7DC2A17E3FA5C41371FF1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<GooglePlayGames.Native.PInvoke.NativePlayer>
struct IEnumerator_1_t4AC5A947F2AA8CA931CCB4DE263BF97772E1CC70;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.NativePlayer>
struct List_1_tE7A39495D928B10103D7D9899B151155EE1915FC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_tDBE9E658DBAF6579C6CBC0C4CA1CF0CE80B6032C;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>
struct List_1_t469E43428399F52F53AF262A1F490E8BD0DB84FD;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>
struct OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// GooglePlayGames.Native.PInvoke.NativePlayer[]
struct NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GooglePlayGames.Native.PInvoke.BaseReferenceHolder
struct BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t56410FDB6265DBD2F28F8062599B198DB049442F;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2BF5C828331510A60F01770EDA23C238D9AE8057;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t77B961C60C3D2BD1A9D9382BB753022A4AADE677;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t8C37544FF1503E97471C78A161E0B8B1E5B54EA4;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_tA36CDA40256B599478F8269F31F083BF577CD3C2;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_tBB651FD35E23180071D14340E1ADDA4AFB8108FB;
// UnityEngine.SocialPlatforms.IScore
struct IScore_tE3BDDCDC8FB888BD6AF13EE00EF6AE225DDF2B3B;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4;
// GooglePlayGames.Native.PInvoke.NativeEvent
struct NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE;
// GooglePlayGames.Native.PInvoke.NativePlayer
struct NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC;
// GooglePlayGames.Native.PInvoke.NativePlayerStats
struct NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151;
// NativeShare
struct NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B;
// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC;
// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_tDD815064FEE41E79AF80329C22B6CB741D91DB36;
// GooglePlayGames.Native.PInvoke.PlayerManager
struct PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E;
// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse
struct PlayerSelectUIResponse_t6251E72736AEC4DA7D0FCA139A204E3923753910;
// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A;
// GooglePlayGames.ReportProgress
struct ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27;
// SpawnManager
struct SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig
struct TurnBasedMatchConfig_t933F7F5402EED63C21EF0FA069DBE9319C0C45CA;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// boss
struct boss_t7103983475D183857493FCA2A27B2EE9F5FB1906;
// soundbites
struct soundbites_t257553EEBDA24FEE9538D7156835431412609421;
// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener
struct OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD;
// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener
struct OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC;
// NativeShare/ShareResultCallback
struct ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F;
// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod
struct OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t8EC6588F46B4E62CA299029206A17099CEC3B936;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tB3878D2A05C966C75A3D062559D885EFD5117EEC;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t38DEF1F8414088FA34E6319B2F34EAAA5E6AC87E;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_tB7A3C517C3866A1DFABD7B32D2E462F7650AEC85;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_tACB5A502656AC8C112D41B8B91F0A7508F4058C1;
// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19
struct U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27;
// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback
struct FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689;
// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback
struct FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15;
// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback
struct FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691;
// GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC2D6FD25DCBDC8B95F92E416521410BF75E5020B;
// GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7B751E3B9F7B4CC827F72BFA9DF5ED2AF70D3C20;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse
struct FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse
struct FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector
struct FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse
struct FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A;
// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t1510878C6AE9B68DCBAFABD2EE7104D3F8C3C819;
// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback
struct OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F;
// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback
struct OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004;
// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback
struct OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511;
// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnParticipantStatusChangedCallback
struct OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B;
// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomConnectedSetChangedCallback
struct OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C;
// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomStatusChangedCallback
struct OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tCF99A68E32C84B80F20D3B890CDF05397716EBFF;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback
struct FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback
struct LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback
struct RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback
struct RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback
struct SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback
struct WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19;
// GooglePlayGames.Native.PInvoke.RealtimeManager/<>c
struct U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992;
// GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse
struct FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse
struct RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78;
// GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse
struct WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983;
// ShareButton/<TakeScreenshotAndShare>d__1
struct U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback
struct CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback
struct FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback
struct OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback
struct ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback
struct SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58;
// GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse
struct CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E;
// GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse
struct FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C;
// GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse
struct OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1;
// GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse
struct ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606;
// GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse
struct SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB;
// SpawnManager/<AsteroidWave>d__16
struct U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650;
// GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback
struct FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326;
// GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse
struct FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657;
// GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse
struct MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F;
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t6D181C2BA99E27BBD0AEDA7B4C2DA9E2414EA2F4;
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse
struct TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280;
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse
struct TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c
struct U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t8ECF11EEC29061F20CD16AC584BF18523A32F314;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback
struct MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback
struct MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback
struct TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6;
// GooglePlayGames.Native.Cwrapper.VideoManager/CaptureCapabilitiesCallback
struct CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453;
// GooglePlayGames.Native.Cwrapper.VideoManager/CaptureStateCallback
struct CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF;
// GooglePlayGames.Native.Cwrapper.VideoManager/IsCaptureAvailableCallback
struct IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA;
// boss/<shooting>d__4
struct U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81;
// GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c
struct U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444;
// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t65D5D41A50C684991EE67BBA176E19FAE7D85D14;
// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBE4F5F9DE66A803437D8CEDDA8B4CABCC66E3016;
// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9;
// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t3A4763BA528AE4FB97535E587FF1763896FAC7AA;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c
struct U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c
struct U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t5D1E69E8395542121999650A2DEE11C84062A8BD;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t21B56017690F5809565D6361C48694F8CFA0BEB5;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tE4B210448755C8C7D477A13AD38A112AAC65AA17;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t0220C985B53590B609F481FBBD1A6DFDCEFACFD3;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t0B5515E2615570601EF96EF4ECAD817A71B51D4C;
// GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c
struct U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c
struct U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE7A39495D928B10103D7D9899B151155EE1915FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiplayerStatus_tDE792785955C8660103E4CC6558337F31A30E726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseStatus_tF7DCAAC973ED0FA21A52681BC7311D3F94520963_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97;
IL2CPP_EXTERN_C String_t* _stringLiteral420D942F312515DD7285036E834BDDDC05AE5F77;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral49B89ADD21DBAB72A083ABECBDB0AE7ABB29D892;
IL2CPP_EXTERN_C String_t* _stringLiteral74CCF37ED1AC77740D7550B240D651F4CD1C3BA3;
IL2CPP_EXTERN_C String_t* _stringLiteral81F7DFA06DEEC7C37A5DB5EDDD317433D1224A57;
IL2CPP_EXTERN_C String_t* _stringLiteral8B52E6EC0ED746CB86D82CF4ABF73B8079029494;
IL2CPP_EXTERN_C String_t* _stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33;
IL2CPP_EXTERN_C String_t* _stringLiteralED278FC13D6C5761DBCA8E9057F2B17F67B49DD0;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m5AEEF38D45D3E86E0256A11F747164DD7D2E9775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CommitResponse_Data_mDB357EC5F24C89C1E07C0F11136495B9C4677226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FetchAllResponse_U3CDataU3Eb__3_0_m4B9C5215AF22FF8C46325208B1E6CB60F6F246BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FetchInvitationsResponse_U3CInvitationsU3Eb__3_0_mC24FA428C842C5D90F534A1F685364DD1B9E4A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FetchListResponse_GetElement_m06F73DBDA460199CF318E3A8C50910F60003FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FetchListResponse_U3CGetEnumeratorU3Eb__3_0_m97833EC87544E79137D1E04E2C56FC0C190DB83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA4758B5CED4CAFF3E38540333C8412D99D328161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBBC92D761E90F49EF079B131B7436B48F5165E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCD8ED4B409677A1E15F1040A2F31796F3CBB454A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenResponse_ConflictId_m9BE1A9CD0FA8E289E9A41DBC349CF6AFAAE3487C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenResponse_ConflictOriginal_m81D3BA98DB5107EF8E011643342CF52DB2D276ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenResponse_ConflictUnmerged_m36470C18230914E6C33024C6FC7EBAB38A3C7B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenResponse_Data_m40F1C62C172C9A3C83BA422DCBDF574F0B3CABF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenResponse_U3CConflictIdU3Eb__3_0_m80099EED86C9F5BD3B256E629E3EDB733BC15D3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutMethod_1__ctor_m447C935805C8ABA4F695666B18D5B16838436676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PInvokeUtilities_OutParamsToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5C27AA084248C2B70B01B0B00CF8A65C75493B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PInvokeUtilities_ToEnumerable_TisNativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_m8495216E39BACFAC1B85CE4D3564EA7FEFB386A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PInvokeUtilities_ToEnumerator_TisNativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_m71D6F5A03EB5A9906B6E09F4DE2D07894163E1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadResponse_Data_mDC06C5189729B5D7DCB63E6C293D84F9EA49F3A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadResponse_U3CDataU3Eb__3_0_m937D00FD06E0C9DE8065BF585AA9061A6062E6E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SnapshotSelectUIResponse_Data_m376A48F37EAB295E350F52CE7370923C402A2590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TurnBasedMatchesResponse_U3CCompletedMatchesU3Eb__9_0_m3C572C1215A193FBF99B73E6A008A0E90AAEA7A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TurnBasedMatchesResponse_U3CInvitationsU3Eb__3_0_mD9B495562D706B69C60E0073A67DEABD90A116C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TurnBasedMatchesResponse_U3CMyTurnMatchesU3Eb__5_0_m27807EE08D7A1C742A77BB7F79D2F561080328D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TurnBasedMatchesResponse_U3CTheirTurnMatchesU3Eb__7_0_m9E451CCC3EAAAD64CAF794BABA1DD8137D1592CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAsteroidWaveU3Ed__16_System_Collections_IEnumerator_Reset_mFC664DC87913FFF1FB3F5B4BDDF2C65C607B7304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_m3FD30771F93B411B70B624051AA42B7B86D75FA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeScreenshotAndShareU3Ed__1_System_Collections_IEnumerator_Reset_m90E7F0AAF7D4D577740C3203B0EA5A1580F505F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CshootingU3Ed__4_System_Collections_IEnumerator_Reset_m1F65184A69288977A19CC0CB74C587670B67FAE4_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.NativePlayer>
struct List_1_tE7A39495D928B10103D7D9899B151155EE1915FC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE7A39495D928B10103D7D9899B151155EE1915FC, ____items_1)); }
	inline NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4* get__items_1() const { return ____items_1; }
	inline NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE7A39495D928B10103D7D9899B151155EE1915FC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE7A39495D928B10103D7D9899B151155EE1915FC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE7A39495D928B10103D7D9899B151155EE1915FC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE7A39495D928B10103D7D9899B151155EE1915FC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE7A39495D928B10103D7D9899B151155EE1915FC_StaticFields, ____emptyArray_5)); }
	inline NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NativePlayerU5BU5D_tB128FF8F6FC0588603BF8B527B3E78D67DD3FDE4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// NativeShare
struct NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208  : public RuntimeObject
{
public:
	// System.String NativeShare::subject
	String_t* ___subject_2;
	// System.String NativeShare::text
	String_t* ___text_3;
	// System.String NativeShare::title
	String_t* ___title_4;
	// System.String NativeShare::url
	String_t* ___url_5;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetPackages
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___targetPackages_6;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetClasses
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___targetClasses_7;
	// System.Collections.Generic.List`1<System.String> NativeShare::files
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___files_8;
	// System.Collections.Generic.List`1<System.String> NativeShare::mimes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___mimes_9;
	// NativeShare/ShareResultCallback NativeShare::callback
	ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * ___callback_10;

public:
	inline static int32_t get_offset_of_subject_2() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___subject_2)); }
	inline String_t* get_subject_2() const { return ___subject_2; }
	inline String_t** get_address_of_subject_2() { return &___subject_2; }
	inline void set_subject_2(String_t* value)
	{
		___subject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_2), (void*)value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_3), (void*)value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___title_4)); }
	inline String_t* get_title_4() const { return ___title_4; }
	inline String_t** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(String_t* value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_4), (void*)value);
	}

	inline static int32_t get_offset_of_url_5() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___url_5)); }
	inline String_t* get_url_5() const { return ___url_5; }
	inline String_t** get_address_of_url_5() { return &___url_5; }
	inline void set_url_5(String_t* value)
	{
		___url_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_5), (void*)value);
	}

	inline static int32_t get_offset_of_targetPackages_6() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___targetPackages_6)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_targetPackages_6() const { return ___targetPackages_6; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_targetPackages_6() { return &___targetPackages_6; }
	inline void set_targetPackages_6(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___targetPackages_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetPackages_6), (void*)value);
	}

	inline static int32_t get_offset_of_targetClasses_7() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___targetClasses_7)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_targetClasses_7() const { return ___targetClasses_7; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_targetClasses_7() { return &___targetClasses_7; }
	inline void set_targetClasses_7(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___targetClasses_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetClasses_7), (void*)value);
	}

	inline static int32_t get_offset_of_files_8() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___files_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_files_8() const { return ___files_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_files_8() { return &___files_8; }
	inline void set_files_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___files_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___files_8), (void*)value);
	}

	inline static int32_t get_offset_of_mimes_9() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___mimes_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_mimes_9() const { return ___mimes_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_mimes_9() { return &___mimes_9; }
	inline void set_mimes_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___mimes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimes_9), (void*)value);
	}

	inline static int32_t get_offset_of_callback_10() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___callback_10)); }
	inline ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * get_callback_10() const { return ___callback_10; }
	inline ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F ** get_address_of_callback_10() { return &___callback_10; }
	inline void set_callback_10(ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * value)
	{
		___callback_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_10), (void*)value);
	}
};

struct NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass NativeShare::m_ajc
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeShare::m_context
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___m_context_1;

public:
	inline static int32_t get_offset_of_m_ajc_0() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208_StaticFields, ___m_ajc_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_m_ajc_0() const { return ___m_ajc_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_m_ajc_0() { return &___m_ajc_0; }
	inline void set_m_ajc_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___m_ajc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ajc_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208_StaticFields, ___m_context_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_m_context_1() const { return ___m_context_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_context_1), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.PlayerManager
struct PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.PlayerManager::mGameServices
	GameServices_t56410FDB6265DBD2F28F8062599B198DB049442F * ___mGameServices_0;

public:
	inline static int32_t get_offset_of_mGameServices_0() { return static_cast<int32_t>(offsetof(PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E, ___mGameServices_0)); }
	inline GameServices_t56410FDB6265DBD2F28F8062599B198DB049442F * get_mGameServices_0() const { return ___mGameServices_0; }
	inline GameServices_t56410FDB6265DBD2F28F8062599B198DB049442F ** get_address_of_mGameServices_0() { return &___mGameServices_0; }
	inline void set_mGameServices_0(GameServices_t56410FDB6265DBD2F28F8062599B198DB049442F * value)
	{
		___mGameServices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGameServices_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener
struct OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener
struct OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IMessageListener GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t8EC6588F46B4E62CA299029206A17099CEC3B936  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass57_0::callback
	Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8EC6588F46B4E62CA299029206A17099CEC3B936, ___callback_0)); }
	inline Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tB3878D2A05C966C75A3D062559D885EFD5117EEC  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass58_0::callback
	Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_tB3878D2A05C966C75A3D062559D885EFD5117EEC, ___callback_0)); }
	inline Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t38DEF1F8414088FA34E6319B2F34EAAA5E6AC87E  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass62_0::callback
	Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t38DEF1F8414088FA34E6319B2F34EAAA5E6AC87E, ___callback_0)); }
	inline Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_tB7A3C517C3866A1DFABD7B32D2E462F7650AEC85  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0::<>4__this
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___U3CU3E4__this_0;
	// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0::board
	RuntimeObject* ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_tB7A3C517C3866A1DFABD7B32D2E462F7650AEC85, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_tB7A3C517C3866A1DFABD7B32D2E462F7650AEC85, ___board_1)); }
	inline RuntimeObject* get_board_1() const { return ___board_1; }
	inline RuntimeObject** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(RuntimeObject* value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_tB7A3C517C3866A1DFABD7B32D2E462F7650AEC85, ___callback_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_2() const { return ___callback_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_tACB5A502656AC8C112D41B8B91F0A7508F4058C1  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0::<>4__this
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___U3CU3E4__this_0;
	// GooglePlayGames.PlayGamesLeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0::board
	PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tACB5A502656AC8C112D41B8B91F0A7508F4058C1, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tACB5A502656AC8C112D41B8B91F0A7508F4058C1, ___board_1)); }
	inline PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * get_board_1() const { return ___board_1; }
	inline PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B ** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tACB5A502656AC8C112D41B8B91F0A7508F4058C1, ___callback_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_2() const { return ___callback_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19
struct U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27  : public RuntimeObject
{
public:
	// System.Int32 GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GooglePlayGames.PlayGamesUserProfile GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::<>4__this
	PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27, ___U3CU3E4__this_2)); }
	inline PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC2D6FD25DCBDC8B95F92E416521410BF75E5020B  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.PInvoke.PlayerManager GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass4_0::<>4__this
	PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * ___U3CU3E4__this_0;
	// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass4_0::coll
	FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7 * ___coll_1;
	// System.Action`1<GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse> GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass4_0::<>9__0
	Action_1_t8107018B60B62406C34FC151AE2FA83AB7B8BAE6 * ___U3CU3E9__0_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC2D6FD25DCBDC8B95F92E416521410BF75E5020B, ___U3CU3E4__this_0)); }
	inline PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_coll_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC2D6FD25DCBDC8B95F92E416521410BF75E5020B, ___coll_1)); }
	inline FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7 * get_coll_1() const { return ___coll_1; }
	inline FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7 ** get_address_of_coll_1() { return &___coll_1; }
	inline void set_coll_1(FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7 * value)
	{
		___coll_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coll_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC2D6FD25DCBDC8B95F92E416521410BF75E5020B, ___U3CU3E9__0_2)); }
	inline Action_1_t8107018B60B62406C34FC151AE2FA83AB7B8BAE6 * get_U3CU3E9__0_2() const { return ___U3CU3E9__0_2; }
	inline Action_1_t8107018B60B62406C34FC151AE2FA83AB7B8BAE6 ** get_address_of_U3CU3E9__0_2() { return &___U3CU3E9__0_2; }
	inline void set_U3CU3E9__0_2(Action_1_t8107018B60B62406C34FC151AE2FA83AB7B8BAE6 * value)
	{
		___U3CU3E9__0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7B751E3B9F7B4CC827F72BFA9DF5ED2AF70D3C20  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.PInvoke.PlayerManager GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass7_0::<>4__this
	PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * ___U3CU3E4__this_0;
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>> GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass7_0::callback
	Action_2_t41314D780C99FC8FB674545B1779785C340CCE10 * ___callback_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t7B751E3B9F7B4CC827F72BFA9DF5ED2AF70D3C20, ___U3CU3E4__this_0)); }
	inline PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t7B751E3B9F7B4CC827F72BFA9DF5ED2AF70D3C20, ___callback_1)); }
	inline Action_2_t41314D780C99FC8FB674545B1779785C340CCE10 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t41314D780C99FC8FB674545B1779785C340CCE10 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t41314D780C99FC8FB674545B1779785C340CCE10 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector
struct FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7  : public RuntimeObject
{
public:
	// System.Int32 GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector::pendingCount
	int32_t ___pendingCount_0;
	// System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.NativePlayer> GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector::results
	List_1_tE7A39495D928B10103D7D9899B151155EE1915FC * ___results_1;
	// System.Action`1<GooglePlayGames.Native.PInvoke.NativePlayer[]> GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector::callback
	Action_1_t51C532112FFD613E8AE78C12C4B29AE2ABBB2771 * ___callback_2;

public:
	inline static int32_t get_offset_of_pendingCount_0() { return static_cast<int32_t>(offsetof(FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7, ___pendingCount_0)); }
	inline int32_t get_pendingCount_0() const { return ___pendingCount_0; }
	inline int32_t* get_address_of_pendingCount_0() { return &___pendingCount_0; }
	inline void set_pendingCount_0(int32_t value)
	{
		___pendingCount_0 = value;
	}

	inline static int32_t get_offset_of_results_1() { return static_cast<int32_t>(offsetof(FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7, ___results_1)); }
	inline List_1_tE7A39495D928B10103D7D9899B151155EE1915FC * get_results_1() const { return ___results_1; }
	inline List_1_tE7A39495D928B10103D7D9899B151155EE1915FC ** get_address_of_results_1() { return &___results_1; }
	inline void set_results_1(List_1_tE7A39495D928B10103D7D9899B151155EE1915FC * value)
	{
		___results_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7, ___callback_2)); }
	inline Action_1_t51C532112FFD613E8AE78C12C4B29AE2ABBB2771 * get_callback_2() const { return ___callback_2; }
	inline Action_1_t51C532112FFD613E8AE78C12C4B29AE2ABBB2771 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_t51C532112FFD613E8AE78C12C4B29AE2ABBB2771 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tCF99A68E32C84B80F20D3B890CDF05397716EBFF  : public RuntimeObject
{
public:
	// System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom> GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper/<>c__DisplayClass15_0::callback
	Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tCF99A68E32C84B80F20D3B890CDF05397716EBFF, ___callback_0)); }
	inline Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD * get_callback_0() const { return ___callback_0; }
	inline Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.RealtimeManager/<>c
struct U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_StaticFields
{
public:
	// GooglePlayGames.Native.PInvoke.RealtimeManager/<>c GooglePlayGames.Native.PInvoke.RealtimeManager/<>c::<>9
	U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 * ___U3CU3E9_0;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.IntPtr> GooglePlayGames.Native.PInvoke.RealtimeManager/<>c::<>9__19_0
	Func_2_t68709FCADCB728E9724D25398C64385F708C58B0 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t68709FCADCB728E9724D25398C64385F708C58B0 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t68709FCADCB728E9724D25398C64385F708C58B0 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t68709FCADCB728E9724D25398C64385F708C58B0 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// ShareButton/<TakeScreenshotAndShare>d__1
struct U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE  : public RuntimeObject
{
public:
	// System.Int32 ShareButton/<TakeScreenshotAndShare>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShareButton/<TakeScreenshotAndShare>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// SpawnManager/<AsteroidWave>d__16
struct U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650  : public RuntimeObject
{
public:
	// System.Int32 SpawnManager/<AsteroidWave>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnManager/<AsteroidWave>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SpawnManager SpawnManager/<AsteroidWave>d__16::<>4__this
	SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650, ___U3CU3E4__this_2)); }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c
struct U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_StaticFields
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c::<>9
	U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 * ___U3CU3E9_0;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c::<>9__48_0
	Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * ___U3CU3E9__48_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__48_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_StaticFields, ___U3CU3E9__48_0_1)); }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * get_U3CU3E9__48_0_1() const { return ___U3CU3E9__48_0_1; }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 ** get_address_of_U3CU3E9__48_0_1() { return &___U3CU3E9__48_0_1; }
	inline void set_U3CU3E9__48_0_1(Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * value)
	{
		___U3CU3E9__48_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__48_0_1), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields
{
public:
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}
};


// boss/<shooting>d__4
struct U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81  : public RuntimeObject
{
public:
	// System.Int32 boss/<shooting>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object boss/<shooting>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// boss boss/<shooting>d__4::<>4__this
	boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81, ___U3CU3E4__this_2)); }
	inline boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c
struct U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_StaticFields
{
public:
	// GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c::<>9
	U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.NativeEvent> GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c::<>9__2_1
	Func_2_t626AFBDFB13D2E3FC28DA467DC69E7297AD81E7F * ___U3CU3E9__2_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_StaticFields, ___U3CU3E9__2_1_1)); }
	inline Func_2_t626AFBDFB13D2E3FC28DA467DC69E7297AD81E7F * get_U3CU3E9__2_1_1() const { return ___U3CU3E9__2_1_1; }
	inline Func_2_t626AFBDFB13D2E3FC28DA467DC69E7297AD81E7F ** get_address_of_U3CU3E9__2_1_1() { return &___U3CU3E9__2_1_1; }
	inline void set_U3CU3E9__2_1_1(Func_2_t626AFBDFB13D2E3FC28DA467DC69E7297AD81E7F * value)
	{
		___U3CU3E9__2_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_1), (void*)value);
	}
};


// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBE4F5F9DE66A803437D8CEDDA8B4CABCC66E3016  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::lostEndpointId
	String_t* ___lostEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tBE4F5F9DE66A803437D8CEDDA8B4CABCC66E3016, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_lostEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tBE4F5F9DE66A803437D8CEDDA8B4CABCC66E3016, ___lostEndpointId_1)); }
	inline String_t* get_lostEndpointId_1() const { return ___lostEndpointId_1; }
	inline String_t** get_address_of_lostEndpointId_1() { return &___lostEndpointId_1; }
	inline void set_lostEndpointId_1(String_t* value)
	{
		___lostEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lostEndpointId_1), (void*)value);
	}
};


// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;
	// System.Byte[] GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_2;
	// System.Boolean GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::isReliableMessage
	bool ___isReliableMessage_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9, ___data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_isReliableMessage_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9, ___isReliableMessage_3)); }
	inline bool get_isReliableMessage_3() const { return ___isReliableMessage_3; }
	inline bool* get_address_of_isReliableMessage_3() { return &___isReliableMessage_3; }
	inline void set_isReliableMessage_3(bool value)
	{
		___isReliableMessage_3 = value;
	}
};


// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t3A4763BA528AE4FB97535E587FF1763896FAC7AA  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3A4763BA528AE4FB97535E587FF1763896FAC7AA, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3A4763BA528AE4FB97535E587FF1763896FAC7AA, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c
struct U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_StaticFields
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<>9
	U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * ___U3CU3E9_0;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<>9__5_0
	Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 * ___U3CU3E9__5_0_1;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<>9__5_1
	Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 * ___U3CU3E9__5_1_2;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<>9__5_2
	Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * ___U3CU3E9__5_2_3;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<>9__5_3
	Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * ___U3CU3E9__5_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_StaticFields, ___U3CU3E9__5_1_2)); }
	inline Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 * get_U3CU3E9__5_1_2() const { return ___U3CU3E9__5_1_2; }
	inline Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 ** get_address_of_U3CU3E9__5_1_2() { return &___U3CU3E9__5_1_2; }
	inline void set_U3CU3E9__5_1_2(Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 * value)
	{
		___U3CU3E9__5_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_StaticFields, ___U3CU3E9__5_2_3)); }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * get_U3CU3E9__5_2_3() const { return ___U3CU3E9__5_2_3; }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 ** get_address_of_U3CU3E9__5_2_3() { return &___U3CU3E9__5_2_3; }
	inline void set_U3CU3E9__5_2_3(Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * value)
	{
		___U3CU3E9__5_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_StaticFields, ___U3CU3E9__5_3_4)); }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * get_U3CU3E9__5_3_4() const { return ___U3CU3E9__5_3_4; }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 ** get_address_of_U3CU3E9__5_3_4() { return &___U3CU3E9__5_3_4; }
	inline void set_U3CU3E9__5_3_4(Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * value)
	{
		___U3CU3E9__5_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_3_4), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0::selfId
	String_t* ___selfId_0;

public:
	inline static int32_t get_offset_of_selfId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7, ___selfId_0)); }
	inline String_t* get_selfId_0() const { return ___selfId_0; }
	inline String_t** get_address_of_selfId_0() { return &___selfId_0; }
	inline void set_selfId_0(String_t* value)
	{
		___selfId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selfId_0), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c
struct U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_StaticFields
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<>9
	U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * ___U3CU3E9_0;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<>9__5_0
	Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 * ___U3CU3E9__5_0_1;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<>9__5_1
	Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 * ___U3CU3E9__5_1_2;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<>9__5_2
	Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * ___U3CU3E9__5_2_3;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<>9__12_0
	Func_2_t8C733463CDB10E4A9763E291D32F4EF4236D19F5 * ___U3CU3E9__12_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t00E9EBA25E8A92C5F0A9A8578AF5F4C36F90D9F9 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_StaticFields, ___U3CU3E9__5_1_2)); }
	inline Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 * get_U3CU3E9__5_1_2() const { return ___U3CU3E9__5_1_2; }
	inline Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 ** get_address_of_U3CU3E9__5_1_2() { return &___U3CU3E9__5_1_2; }
	inline void set_U3CU3E9__5_1_2(Func_2_tBF064680ED0A5E212D3812C9D1CA81B150BC67A0 * value)
	{
		___U3CU3E9__5_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_StaticFields, ___U3CU3E9__5_2_3)); }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * get_U3CU3E9__5_2_3() const { return ___U3CU3E9__5_2_3; }
	inline Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 ** get_address_of_U3CU3E9__5_2_3() { return &___U3CU3E9__5_2_3; }
	inline void set_U3CU3E9__5_2_3(Func_2_tB6EDA9C8AE5637506C5EBB0F4B517C8EB842C0C4 * value)
	{
		___U3CU3E9__5_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_StaticFields, ___U3CU3E9__12_0_4)); }
	inline Func_2_t8C733463CDB10E4A9763E291D32F4EF4236D19F5 * get_U3CU3E9__12_0_4() const { return ___U3CU3E9__12_0_4; }
	inline Func_2_t8C733463CDB10E4A9763E291D32F4EF4236D19F5 ** get_address_of_U3CU3E9__12_0_4() { return &___U3CU3E9__12_0_4; }
	inline void set_U3CU3E9__12_0_4(Func_2_t8C733463CDB10E4A9763E291D32F4EF4236D19F5 * value)
	{
		___U3CU3E9__12_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_4), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t5D1E69E8395542121999650A2DEE11C84062A8BD  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * ___U3CU3E4__this_0;
	// System.Single GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass2_0::percent
	float ___percent_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t5D1E69E8395542121999650A2DEE11C84062A8BD, ___U3CU3E4__this_0)); }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_percent_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t5D1E69E8395542121999650A2DEE11C84062A8BD, ___percent_1)); }
	inline float get_percent_1() const { return ___percent_1; }
	inline float* get_address_of_percent_1() { return &___percent_1; }
	inline void set_percent_1(float value)
	{
		___percent_1 = value;
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t21B56017690F5809565D6361C48694F8CFA0BEB5  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * ___U3CU3E4__this_0;
	// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass3_0::success
	bool ___success_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t21B56017690F5809565D6361C48694F8CFA0BEB5, ___U3CU3E4__this_0)); }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_success_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t21B56017690F5809565D6361C48694F8CFA0BEB5, ___success_1)); }
	inline bool get_success_1() const { return ___success_1; }
	inline bool* get_address_of_success_1() { return &___success_1; }
	inline void set_success_1(bool value)
	{
		___success_1 = value;
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tE4B210448755C8C7D477A13AD38A112AAC65AA17  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass5_0::<>4__this
	OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * ___U3CU3E4__this_0;
	// System.String[] GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass5_0::participantIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___participantIds_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE4B210448755C8C7D477A13AD38A112AAC65AA17, ___U3CU3E4__this_0)); }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_participantIds_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE4B210448755C8C7D477A13AD38A112AAC65AA17, ___participantIds_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_participantIds_1() const { return ___participantIds_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_participantIds_1() { return &___participantIds_1; }
	inline void set_participantIds_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___participantIds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___participantIds_1), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t0220C985B53590B609F481FBBD1A6DFDCEFACFD3  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass6_0::<>4__this
	OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * ___U3CU3E4__this_0;
	// System.String[] GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass6_0::participantIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___participantIds_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t0220C985B53590B609F481FBBD1A6DFDCEFACFD3, ___U3CU3E4__this_0)); }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_participantIds_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t0220C985B53590B609F481FBBD1A6DFDCEFACFD3, ___participantIds_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_participantIds_1() const { return ___participantIds_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_participantIds_1() { return &___participantIds_1; }
	inline void set_participantIds_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___participantIds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___participantIds_1), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0::<>4__this
	OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * ___U3CU3E4__this_0;
	// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0::isReliable
	bool ___isReliable_1;
	// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0::senderId
	String_t* ___senderId_2;
	// System.Byte[] GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374, ___U3CU3E4__this_0)); }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_isReliable_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374, ___isReliable_1)); }
	inline bool get_isReliable_1() const { return ___isReliable_1; }
	inline bool* get_address_of_isReliable_1() { return &___isReliable_1; }
	inline void set_isReliable_1(bool value)
	{
		___isReliable_1 = value;
	}

	inline static int32_t get_offset_of_senderId_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374, ___senderId_2)); }
	inline String_t* get_senderId_2() const { return ___senderId_2; }
	inline String_t** get_address_of_senderId_2() { return &___senderId_2; }
	inline void set_senderId_2(String_t* value)
	{
		___senderId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___senderId_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374, ___data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t0B5515E2615570601EF96EF4ECAD817A71B51D4C  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass8_0::<>4__this
	OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * ___U3CU3E4__this_0;
	// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass8_0::participant
	Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * ___participant_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t0B5515E2615570601EF96EF4ECAD817A71B51D4C, ___U3CU3E4__this_0)); }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_participant_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t0B5515E2615570601EF96EF4ECAD817A71B51D4C, ___participant_1)); }
	inline Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * get_participant_1() const { return ___participant_1; }
	inline Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B ** get_address_of_participant_1() { return &___participant_1; }
	inline void set_participant_1(Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * value)
	{
		___participant_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___participant_1), (void*)value);
	}
};


// GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c
struct U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_StaticFields
{
public:
	// GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::<>9
	U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * ___U3CU3E9_0;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::<>9__8_0
	Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 * ___U3CU3E9__8_0_1;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::<>9__9_0
	Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 * ___U3CU3E9__9_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_StaticFields, ___U3CU3E9__9_0_2)); }
	inline Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 * get_U3CU3E9__9_0_2() const { return ___U3CU3E9__9_0_2; }
	inline Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 ** get_address_of_U3CU3E9__9_0_2() { return &___U3CU3E9__9_0_2; }
	inline void set_U3CU3E9__9_0_2(Action_2_tECF9C607D4BA1D598D0A8D30C65CBBA2E3197312 * value)
	{
		___U3CU3E9__9_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_2), (void*)value);
	}
};


// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c
struct U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_StaticFields
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::<>9
	U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * ___U3CU3E9_0;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::<>9__30_0
	InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 * ___U3CU3E9__30_0_1;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::<>9__30_1
	MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 * ___U3CU3E9__30_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_StaticFields, ___U3CU3E9__30_0_1)); }
	inline InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 * get_U3CU3E9__30_0_1() const { return ___U3CU3E9__30_0_1; }
	inline InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 ** get_address_of_U3CU3E9__30_0_1() { return &___U3CU3E9__30_0_1; }
	inline void set_U3CU3E9__30_0_1(InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 * value)
	{
		___U3CU3E9__30_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_StaticFields, ___U3CU3E9__30_1_2)); }
	inline MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 * get_U3CU3E9__30_1_2() const { return ___U3CU3E9__30_1_2; }
	inline MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 ** get_address_of_U3CU3E9__30_1_2() { return &___U3CU3E9__30_1_2; }
	inline void set_U3CU3E9__30_1_2(MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 * value)
	{
		___U3CU3E9__30_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_1_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEndpointId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mServiceId_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mScopes_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mHidePopups
	bool ___mHidePopups_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestEmail
	bool ___mRequestEmail_6;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestIdToken
	bool ___mRequestIdToken_7;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mAccountName
	String_t* ___mAccountName_8;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mInvitationDelegate
	InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 * ___mInvitationDelegate_9;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mMatchDelegate
	MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 * ___mMatchDelegate_10;

public:
	inline static int32_t get_offset_of_mEnableSavedGames_1() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mEnableSavedGames_1)); }
	inline bool get_mEnableSavedGames_1() const { return ___mEnableSavedGames_1; }
	inline bool* get_address_of_mEnableSavedGames_1() { return &___mEnableSavedGames_1; }
	inline void set_mEnableSavedGames_1(bool value)
	{
		___mEnableSavedGames_1 = value;
	}

	inline static int32_t get_offset_of_mScopes_2() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mScopes_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mScopes_2() const { return ___mScopes_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mScopes_2() { return &___mScopes_2; }
	inline void set_mScopes_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mScopes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScopes_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRequestAuthCode_3() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestAuthCode_3)); }
	inline bool get_mRequestAuthCode_3() const { return ___mRequestAuthCode_3; }
	inline bool* get_address_of_mRequestAuthCode_3() { return &___mRequestAuthCode_3; }
	inline void set_mRequestAuthCode_3(bool value)
	{
		___mRequestAuthCode_3 = value;
	}

	inline static int32_t get_offset_of_mForceRefresh_4() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mForceRefresh_4)); }
	inline bool get_mForceRefresh_4() const { return ___mForceRefresh_4; }
	inline bool* get_address_of_mForceRefresh_4() { return &___mForceRefresh_4; }
	inline void set_mForceRefresh_4(bool value)
	{
		___mForceRefresh_4 = value;
	}

	inline static int32_t get_offset_of_mHidePopups_5() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mHidePopups_5)); }
	inline bool get_mHidePopups_5() const { return ___mHidePopups_5; }
	inline bool* get_address_of_mHidePopups_5() { return &___mHidePopups_5; }
	inline void set_mHidePopups_5(bool value)
	{
		___mHidePopups_5 = value;
	}

	inline static int32_t get_offset_of_mRequestEmail_6() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestEmail_6)); }
	inline bool get_mRequestEmail_6() const { return ___mRequestEmail_6; }
	inline bool* get_address_of_mRequestEmail_6() { return &___mRequestEmail_6; }
	inline void set_mRequestEmail_6(bool value)
	{
		___mRequestEmail_6 = value;
	}

	inline static int32_t get_offset_of_mRequestIdToken_7() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestIdToken_7)); }
	inline bool get_mRequestIdToken_7() const { return ___mRequestIdToken_7; }
	inline bool* get_address_of_mRequestIdToken_7() { return &___mRequestIdToken_7; }
	inline void set_mRequestIdToken_7(bool value)
	{
		___mRequestIdToken_7 = value;
	}

	inline static int32_t get_offset_of_mAccountName_8() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mAccountName_8)); }
	inline String_t* get_mAccountName_8() const { return ___mAccountName_8; }
	inline String_t** get_address_of_mAccountName_8() { return &___mAccountName_8; }
	inline void set_mAccountName_8(String_t* value)
	{
		___mAccountName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAccountName_8), (void*)value);
	}

	inline static int32_t get_offset_of_mInvitationDelegate_9() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mInvitationDelegate_9)); }
	inline InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 * get_mInvitationDelegate_9() const { return ___mInvitationDelegate_9; }
	inline InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 ** get_address_of_mInvitationDelegate_9() { return &___mInvitationDelegate_9; }
	inline void set_mInvitationDelegate_9(InvitationReceivedDelegate_t26E51EA50B89EF07CE99CAF4E616D5FA788B9B64 * value)
	{
		___mInvitationDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInvitationDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_mMatchDelegate_10() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mMatchDelegate_10)); }
	inline MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 * get_mMatchDelegate_10() const { return ___mMatchDelegate_10; }
	inline MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 ** get_address_of_mMatchDelegate_10() { return &___mMatchDelegate_10; }
	inline void set_mMatchDelegate_10(MatchDelegate_t72CAC46E9122485E1F90E51D6EF9D0FE33111280 * value)
	{
		___mMatchDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMatchDelegate_10), (void*)value);
	}
};

struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_StaticFields
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  ___DefaultConfiguration_0;

public:
	inline static int32_t get_offset_of_DefaultConfiguration_0() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_StaticFields, ___DefaultConfiguration_0)); }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  get_DefaultConfiguration_0() const { return ___DefaultConfiguration_0; }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 * get_address_of_DefaultConfiguration_0() { return &___DefaultConfiguration_0; }
	inline void set_DefaultConfiguration_0(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  value)
	{
		___DefaultConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mAccountName_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mInvitationDelegate_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mMatchDelegate_10), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	char** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	char* ___mAccountName_8;
	Il2CppMethodPointer ___mInvitationDelegate_9;
	Il2CppMethodPointer ___mMatchDelegate_10;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	Il2CppChar** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	Il2CppChar* ___mAccountName_8;
	Il2CppMethodPointer ___mInvitationDelegate_9;
	Il2CppMethodPointer ___mMatchDelegate_10;
};

// UnityEngine.SocialPlatforms.Range
struct Range_t70C133E51417BC822E878050C90A577A69B671DC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// GooglePlayGames.BasicApi.Achievement
struct Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;

public:
	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mIsRevealed_3() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mIsRevealed_3)); }
	inline bool get_mIsRevealed_3() const { return ___mIsRevealed_3; }
	inline bool* get_address_of_mIsRevealed_3() { return &___mIsRevealed_3; }
	inline void set_mIsRevealed_3(bool value)
	{
		___mIsRevealed_3 = value;
	}

	inline static int32_t get_offset_of_mIsUnlocked_4() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mIsUnlocked_4)); }
	inline bool get_mIsUnlocked_4() const { return ___mIsUnlocked_4; }
	inline bool* get_address_of_mIsUnlocked_4() { return &___mIsUnlocked_4; }
	inline void set_mIsUnlocked_4(bool value)
	{
		___mIsUnlocked_4 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_5() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mCurrentSteps_5)); }
	inline int32_t get_mCurrentSteps_5() const { return ___mCurrentSteps_5; }
	inline int32_t* get_address_of_mCurrentSteps_5() { return &___mCurrentSteps_5; }
	inline void set_mCurrentSteps_5(int32_t value)
	{
		___mCurrentSteps_5 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_6() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mTotalSteps_6)); }
	inline int32_t get_mTotalSteps_6() const { return ___mTotalSteps_6; }
	inline int32_t* get_address_of_mTotalSteps_6() { return &___mTotalSteps_6; }
	inline void set_mTotalSteps_6(int32_t value)
	{
		___mTotalSteps_6 = value;
	}

	inline static int32_t get_offset_of_mDescription_7() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mDescription_7)); }
	inline String_t* get_mDescription_7() const { return ___mDescription_7; }
	inline String_t** get_address_of_mDescription_7() { return &___mDescription_7; }
	inline void set_mDescription_7(String_t* value)
	{
		___mDescription_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_7), (void*)value);
	}

	inline static int32_t get_offset_of_mName_8() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mName_8)); }
	inline String_t* get_mName_8() const { return ___mName_8; }
	inline String_t** get_address_of_mName_8() { return &___mName_8; }
	inline void set_mName_8(String_t* value)
	{
		___mName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_8), (void*)value);
	}

	inline static int32_t get_offset_of_mLastModifiedTime_9() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mLastModifiedTime_9)); }
	inline int64_t get_mLastModifiedTime_9() const { return ___mLastModifiedTime_9; }
	inline int64_t* get_address_of_mLastModifiedTime_9() { return &___mLastModifiedTime_9; }
	inline void set_mLastModifiedTime_9(int64_t value)
	{
		___mLastModifiedTime_9 = value;
	}

	inline static int32_t get_offset_of_mPoints_10() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mPoints_10)); }
	inline uint64_t get_mPoints_10() const { return ___mPoints_10; }
	inline uint64_t* get_address_of_mPoints_10() { return &___mPoints_10; }
	inline void set_mPoints_10(uint64_t value)
	{
		___mPoints_10 = value;
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_11() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mRevealedImageUrl_11)); }
	inline String_t* get_mRevealedImageUrl_11() const { return ___mRevealedImageUrl_11; }
	inline String_t** get_address_of_mRevealedImageUrl_11() { return &___mRevealedImageUrl_11; }
	inline void set_mRevealedImageUrl_11(String_t* value)
	{
		___mRevealedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_12() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A, ___mUnlockedImageUrl_12)); }
	inline String_t* get_mUnlockedImageUrl_12() const { return ___mUnlockedImageUrl_12; }
	inline String_t** get_address_of_mUnlockedImageUrl_12() { return &___mUnlockedImageUrl_12; }
	inline void set_mUnlockedImageUrl_12(String_t* value)
	{
		___mUnlockedImageUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_12), (void*)value);
	}
};

struct Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A_StaticFields
{
public:
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpoch_0 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC  : public RuntimeObject
{
public:
	// GooglePlayGames.ReportProgress GooglePlayGames.PlayGamesAchievement::mProgressCallback
	ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 * ___mProgressCallback_0;
	// System.String GooglePlayGames.PlayGamesAchievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mCurrentSteps
	int32_t ___mCurrentSteps_3;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mTotalSteps
	int32_t ___mTotalSteps_4;
	// System.Double GooglePlayGames.PlayGamesAchievement::mPercentComplete
	double ___mPercentComplete_5;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mCompleted
	bool ___mCompleted_6;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mHidden
	bool ___mHidden_7;
	// System.DateTime GooglePlayGames.PlayGamesAchievement::mLastModifiedTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___mLastModifiedTime_8;
	// System.String GooglePlayGames.PlayGamesAchievement::mTitle
	String_t* ___mTitle_9;
	// System.String GooglePlayGames.PlayGamesAchievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_10;
	// System.String GooglePlayGames.PlayGamesAchievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_11;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesAchievement::mImageFetcher
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___mImageFetcher_12;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::mImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mImage_13;
	// System.String GooglePlayGames.PlayGamesAchievement::mDescription
	String_t* ___mDescription_14;
	// System.UInt64 GooglePlayGames.PlayGamesAchievement::mPoints
	uint64_t ___mPoints_15;

public:
	inline static int32_t get_offset_of_mProgressCallback_0() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mProgressCallback_0)); }
	inline ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 * get_mProgressCallback_0() const { return ___mProgressCallback_0; }
	inline ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 ** get_address_of_mProgressCallback_0() { return &___mProgressCallback_0; }
	inline void set_mProgressCallback_0(ReportProgress_tDB0B195833B4D0F97BF3A363EAE3ED60729F4251 * value)
	{
		___mProgressCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mProgressCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_3() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mCurrentSteps_3)); }
	inline int32_t get_mCurrentSteps_3() const { return ___mCurrentSteps_3; }
	inline int32_t* get_address_of_mCurrentSteps_3() { return &___mCurrentSteps_3; }
	inline void set_mCurrentSteps_3(int32_t value)
	{
		___mCurrentSteps_3 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_4() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mTotalSteps_4)); }
	inline int32_t get_mTotalSteps_4() const { return ___mTotalSteps_4; }
	inline int32_t* get_address_of_mTotalSteps_4() { return &___mTotalSteps_4; }
	inline void set_mTotalSteps_4(int32_t value)
	{
		___mTotalSteps_4 = value;
	}

	inline static int32_t get_offset_of_mPercentComplete_5() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mPercentComplete_5)); }
	inline double get_mPercentComplete_5() const { return ___mPercentComplete_5; }
	inline double* get_address_of_mPercentComplete_5() { return &___mPercentComplete_5; }
	inline void set_mPercentComplete_5(double value)
	{
		___mPercentComplete_5 = value;
	}

	inline static int32_t get_offset_of_mCompleted_6() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mCompleted_6)); }
	inline bool get_mCompleted_6() const { return ___mCompleted_6; }
	inline bool* get_address_of_mCompleted_6() { return &___mCompleted_6; }
	inline void set_mCompleted_6(bool value)
	{
		___mCompleted_6 = value;
	}

	inline static int32_t get_offset_of_mHidden_7() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mHidden_7)); }
	inline bool get_mHidden_7() const { return ___mHidden_7; }
	inline bool* get_address_of_mHidden_7() { return &___mHidden_7; }
	inline void set_mHidden_7(bool value)
	{
		___mHidden_7 = value;
	}

	inline static int32_t get_offset_of_mLastModifiedTime_8() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mLastModifiedTime_8)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_mLastModifiedTime_8() const { return ___mLastModifiedTime_8; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_mLastModifiedTime_8() { return &___mLastModifiedTime_8; }
	inline void set_mLastModifiedTime_8(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___mLastModifiedTime_8 = value;
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_10() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mRevealedImageUrl_10)); }
	inline String_t* get_mRevealedImageUrl_10() const { return ___mRevealedImageUrl_10; }
	inline String_t** get_address_of_mRevealedImageUrl_10() { return &___mRevealedImageUrl_10; }
	inline void set_mRevealedImageUrl_10(String_t* value)
	{
		___mRevealedImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_10), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_11() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mUnlockedImageUrl_11)); }
	inline String_t* get_mUnlockedImageUrl_11() const { return ___mUnlockedImageUrl_11; }
	inline String_t** get_address_of_mUnlockedImageUrl_11() { return &___mUnlockedImageUrl_11; }
	inline void set_mUnlockedImageUrl_11(String_t* value)
	{
		___mUnlockedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mImageFetcher_12() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mImageFetcher_12)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_mImageFetcher_12() const { return ___mImageFetcher_12; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_mImageFetcher_12() { return &___mImageFetcher_12; }
	inline void set_mImageFetcher_12(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___mImageFetcher_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageFetcher_12), (void*)value);
	}

	inline static int32_t get_offset_of_mImage_13() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mImage_13)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mImage_13() const { return ___mImage_13; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mImage_13() { return &___mImage_13; }
	inline void set_mImage_13(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_mDescription_14() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mDescription_14)); }
	inline String_t* get_mDescription_14() const { return ___mDescription_14; }
	inline String_t** get_address_of_mDescription_14() { return &___mDescription_14; }
	inline void set_mDescription_14(String_t* value)
	{
		___mDescription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPoints_15() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC, ___mPoints_15)); }
	inline uint64_t get_mPoints_15() const { return ___mPoints_15; }
	inline uint64_t* get_address_of_mPoints_15() { return &___mPoints_15; }
	inline void set_mPoints_15(uint64_t value)
	{
		___mPoints_15 = value;
	}
};


// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.PlayGamesPlatform::mConfiguration
	PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  ___mConfiguration_3;
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * ___mLocalUser_4;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_5;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___mIdMap_7;

public:
	inline static int32_t get_offset_of_mConfiguration_3() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mConfiguration_3)); }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  get_mConfiguration_3() const { return ___mConfiguration_3; }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 * get_address_of_mConfiguration_3() { return &___mConfiguration_3; }
	inline void set_mConfiguration_3(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  value)
	{
		___mConfiguration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mAccountName_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mInvitationDelegate_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mMatchDelegate_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mLocalUser_4() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mLocalUser_4)); }
	inline PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * get_mLocalUser_4() const { return ___mLocalUser_4; }
	inline PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D ** get_address_of_mLocalUser_4() { return &___mLocalUser_4; }
	inline void set_mLocalUser_4(PlayGamesLocalUser_t1C11AD1707252317962AD055A9B543A58249179D * value)
	{
		___mLocalUser_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUser_4), (void*)value);
	}

	inline static int32_t get_offset_of_mClient_5() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mClient_5)); }
	inline RuntimeObject* get_mClient_5() const { return ___mClient_5; }
	inline RuntimeObject** get_address_of_mClient_5() { return &___mClient_5; }
	inline void set_mClient_5(RuntimeObject* value)
	{
		___mClient_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_5), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLbUi_6() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mDefaultLbUi_6)); }
	inline String_t* get_mDefaultLbUi_6() const { return ___mDefaultLbUi_6; }
	inline String_t** get_address_of_mDefaultLbUi_6() { return &___mDefaultLbUi_6; }
	inline void set_mDefaultLbUi_6(String_t* value)
	{
		___mDefaultLbUi_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLbUi_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIdMap_7() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F, ___mIdMap_7)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_mIdMap_7() const { return ___mIdMap_7; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_mIdMap_7() { return &___mIdMap_7; }
	inline void set_mIdMap_7(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___mIdMap_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIdMap_7), (void*)value);
	}
};

struct PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields, ___sInstance_0)); }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * get_sInstance_0() const { return ___sInstance_0; }
	inline PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_sNearbyInitializePending_1() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields, ___sNearbyInitializePending_1)); }
	inline bool get_sNearbyInitializePending_1() const { return ___sNearbyInitializePending_1; }
	inline bool* get_address_of_sNearbyInitializePending_1() { return &___sNearbyInitializePending_1; }
	inline void set_sNearbyInitializePending_1(bool value)
	{
		___sNearbyInitializePending_1 = value;
	}

	inline static int32_t get_offset_of_sNearbyConnectionClient_2() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F_StaticFields, ___sNearbyConnectionClient_2)); }
	inline RuntimeObject* get_sNearbyConnectionClient_2() const { return ___sNearbyConnectionClient_2; }
	inline RuntimeObject** get_address_of_sNearbyConnectionClient_2() { return &___sNearbyConnectionClient_2; }
	inline void set_sNearbyConnectionClient_2(RuntimeObject* value)
	{
		___sNearbyConnectionClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNearbyConnectionClient_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_3;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mImage_4;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerId_1() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mPlayerId_1)); }
	inline String_t* get_mPlayerId_1() const { return ___mPlayerId_1; }
	inline String_t** get_address_of_mPlayerId_1() { return &___mPlayerId_1; }
	inline void set_mPlayerId_1(String_t* value)
	{
		___mPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mAvatarUrl_2() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mAvatarUrl_2)); }
	inline String_t* get_mAvatarUrl_2() const { return ___mAvatarUrl_2; }
	inline String_t** get_address_of_mAvatarUrl_2() { return &___mAvatarUrl_2; }
	inline void set_mAvatarUrl_2(String_t* value)
	{
		___mAvatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAvatarUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_mImageLoading_3() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mImageLoading_3)); }
	inline bool get_mImageLoading_3() const { return ___mImageLoading_3; }
	inline bool* get_address_of_mImageLoading_3() { return &___mImageLoading_3; }
	inline void set_mImageLoading_3(bool value)
	{
		___mImageLoading_3 = value;
	}

	inline static int32_t get_offset_of_mImage_4() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mImage_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mImage_4() const { return ___mImage_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mImage_4() { return &___mImage_4; }
	inline void set_mImage_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_4), (void*)value);
	}
};


// GooglePlayGames.BasicApi.ResponseStatus
struct ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus
struct SavedGameRequestStatus_tA5EF487EDCE427196C113A9774865F776A83E3DF 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SavedGameRequestStatus_tA5EF487EDCE427196C113A9774865F776A83E3DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.TimeScope
struct TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.SocialPlatforms.UserScope
struct UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus
struct MultiplayerStatus_tDE792785955C8660103E4CC6558337F31A30E726 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MultiplayerStatus_tDE792785955C8660103E4CC6558337F31A30E726, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus
struct ResponseStatus_tF7DCAAC973ED0FA21A52681BC7311D3F94520963 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_tF7DCAAC973ED0FA21A52681BC7311D3F94520963, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus
struct SnapshotOpenStatus_tCA764E46C752ABABFABE917C1CD8E91C694D981A 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnapshotOpenStatus_tCA764E46C752ABABFABE917C1CD8E91C694D981A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus
struct UIStatus_t5C1DE3F44128A2BC2549DCFCBFEF6DB1C178D5A8 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIStatus_t5C1DE3F44128A2BC2549DCFCBFEF6DB1C178D5A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType
struct InvType_tEC2C03CE0C5EA90F36D81B20CFD5F554A3DE16A4 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InvType_tEC2C03CE0C5EA90F36D81B20CFD5F554A3DE16A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus
struct ParticipantStatus_tD21EB161C7F5BD752F5BBA0031F234149CAC2BF4 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticipantStatus_tD21EB161C7F5BD752F5BBA0031F234149CAC2BF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t1510878C6AE9B68DCBAFABD2EE7104D3F8C3C819  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse/<>c__DisplayClass2_0::<>4__this
	PlayerSelectUIResponse_t6251E72736AEC4DA7D0FCA139A204E3923753910 * ___U3CU3E4__this_0;
	// System.UIntPtr GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse/<>c__DisplayClass2_0::index
	uintptr_t ___index_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t1510878C6AE9B68DCBAFABD2EE7104D3F8C3C819, ___U3CU3E4__this_0)); }
	inline PlayerSelectUIResponse_t6251E72736AEC4DA7D0FCA139A204E3923753910 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayerSelectUIResponse_t6251E72736AEC4DA7D0FCA139A204E3923753910 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayerSelectUIResponse_t6251E72736AEC4DA7D0FCA139A204E3923753910 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t1510878C6AE9B68DCBAFABD2EE7104D3F8C3C819, ___index_1)); }
	inline uintptr_t get_index_1() const { return ___index_1; }
	inline uintptr_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(uintptr_t value)
	{
		___index_1 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings/HelpTypes
struct HelpTypes_tA9ECA66280CA9684D680006253ADCC13FA558E0D 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings/HelpTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HelpTypes_tA9ECA66280CA9684D680006253ADCC13FA558E0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings/InspectorStates
struct InspectorStates_tDF023E8A87CE4BCD18B5827A795CDB0A86F1C7CD 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings/InspectorStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InspectorStates_tDF023E8A87CE4BCD18B5827A795CDB0A86F1C7CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings/MessageTypes
struct MessageTypes_tBB710D61BE06C1C46B66212B22F00D089A3829FA 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings/MessageTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageTypes_tBB710D61BE06C1C46B66212B22F00D089A3829FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Status/AuthStatus
struct AuthStatus_tEA7C684C76B768FE6036B651B726B7874C36FF1C 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Status/AuthStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthStatus_tEA7C684C76B768FE6036B651B726B7874C36FF1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Status/CommonErrorStatus
struct CommonErrorStatus_t7ED2729A355A7C784DCB54653568D92094EFB6A3 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Status/CommonErrorStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommonErrorStatus_t7ED2729A355A7C784DCB54653568D92094EFB6A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Status/FlushStatus
struct FlushStatus_t531DC521E1D581F984FEADF5AB78EF859B87434E 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Status/FlushStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlushStatus_t531DC521E1D581F984FEADF5AB78EF859B87434E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Status/MultiplayerStatus
struct MultiplayerStatus_tD8489D3B3257E372DAFC4D147BB98F5449C7A744 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Status/MultiplayerStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MultiplayerStatus_tD8489D3B3257E372DAFC4D147BB98F5449C7A744, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Status/ResponseStatus
struct ResponseStatus_t51484CEAFF26E93A974DCDFCBF9210E97609AB9E 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Status/ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t51484CEAFF26E93A974DCDFCBF9210E97609AB9E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Status/SnapshotOpenStatus
struct SnapshotOpenStatus_t7E3B5EBF5FB6B6ACA5FCF582FC88F0391A95A1A1 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Status/SnapshotOpenStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnapshotOpenStatus_t7E3B5EBF5FB6B6ACA5FCF582FC88F0391A95A1A1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Status/UIStatus
struct UIStatus_tFC59E3A9447FD1ED2FEE19E824A1528327CB4A49 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Status/UIStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIStatus_tFC59E3A9447FD1ED2FEE19E824A1528327CB4A49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus
struct MatchStatus_t88057B61B80C0DE9A5A4134B1EC2AC0D6026B6B3 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchStatus_t88057B61B80C0DE9A5A4134B1EC2AC0D6026B6B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus
struct MatchTurnStatus_tB9C7B9AE035D905A256E0D9379FB660FB3381533 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchTurnStatus_tB9C7B9AE035D905A256E0D9379FB660FB3381533, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t8ECF11EEC29061F20CD16AC584BF18523A32F314  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig/<>c__DisplayClass1_0::<>4__this
	TurnBasedMatchConfig_t933F7F5402EED63C21EF0FA069DBE9319C0C45CA * ___U3CU3E4__this_0;
	// System.UIntPtr GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig/<>c__DisplayClass1_0::index
	uintptr_t ___index_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t8ECF11EEC29061F20CD16AC584BF18523A32F314, ___U3CU3E4__this_0)); }
	inline TurnBasedMatchConfig_t933F7F5402EED63C21EF0FA069DBE9319C0C45CA * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TurnBasedMatchConfig_t933F7F5402EED63C21EF0FA069DBE9319C0C45CA ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TurnBasedMatchConfig_t933F7F5402EED63C21EF0FA069DBE9319C0C45CA * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t8ECF11EEC29061F20CD16AC584BF18523A32F314, ___index_1)); }
	inline uintptr_t get_index_1() const { return ___index_1; }
	inline uintptr_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(uintptr_t value)
	{
		___index_1 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/AchievementState
struct AchievementState_t0B014D5C0F53E08E44EDDDDE5EF4799304B681BE 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/AchievementState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AchievementState_t0B014D5C0F53E08E44EDDDDE5EF4799304B681BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/AchievementType
struct AchievementType_t77CFA6C61F9D7D576BC156DD980150257431EAC9 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/AchievementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AchievementType_t77CFA6C61F9D7D576BC156DD980150257431EAC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/AuthOperation
struct AuthOperation_t812788F6642C24A76888FF4881B5ED87A7FE1498 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/AuthOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthOperation_t812788F6642C24A76888FF4881B5ED87A7FE1498, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/DataSource
struct DataSource_t3D6C9B739501E9B9863C6B226CAB9BD1B9DB626C 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/DataSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataSource_t3D6C9B739501E9B9863C6B226CAB9BD1B9DB626C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/EventVisibility
struct EventVisibility_t80CD879A2C55DECA4F98E495857E28D95D6BB3C4 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/EventVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventVisibility_t80CD879A2C55DECA4F98E495857E28D95D6BB3C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/ImageResolution
struct ImageResolution_tE4809B4D6EE8E656E63A3CC8EA8B2DA0F6325BF3 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/ImageResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageResolution_tE4809B4D6EE8E656E63A3CC8EA8B2DA0F6325BF3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/LeaderboardCollection
struct LeaderboardCollection_t52D3A35A3CAD9EBF2A9D80EF367CC7B34F757CCA 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/LeaderboardCollection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardCollection_t52D3A35A3CAD9EBF2A9D80EF367CC7B34F757CCA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/LeaderboardOrder
struct LeaderboardOrder_t05CE76F5B1DE35391883119FD4D3F94B146D1E19 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/LeaderboardOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardOrder_t05CE76F5B1DE35391883119FD4D3F94B146D1E19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/LeaderboardStart
struct LeaderboardStart_t591694FBB2E92600565CB7C03B896FBCD4D6ED12 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/LeaderboardStart::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardStart_t591694FBB2E92600565CB7C03B896FBCD4D6ED12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan
struct LeaderboardTimeSpan_tBE397665AE5BE9B27E3232F59805162866EAC7E9 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardTimeSpan_tBE397665AE5BE9B27E3232F59805162866EAC7E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/LogLevel
struct LogLevel_t509780B8499C7F8D72747B620C7628CBFC324BA6 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t509780B8499C7F8D72747B620C7628CBFC324BA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/MatchResult
struct MatchResult_t894229D69CE198CBAA54D48154A732AF5F38CE8B 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/MatchResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchResult_t894229D69CE198CBAA54D48154A732AF5F38CE8B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/MatchStatus
struct MatchStatus_t35198491CAE1FA418A723C96EA2AE5A0DAD84E26 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/MatchStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchStatus_t35198491CAE1FA418A723C96EA2AE5A0DAD84E26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent
struct MultiplayerEvent_t6601ACEEED6D1215C991D96DD717F554E7617BAF 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MultiplayerEvent_t6601ACEEED6D1215C991D96DD717F554E7617BAF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/MultiplayerInvitationType
struct MultiplayerInvitationType_t270481961AF53D137A65646DF5914FA31A84355B 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/MultiplayerInvitationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MultiplayerInvitationType_t270481961AF53D137A65646DF5914FA31A84355B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus
struct ParticipantStatus_tBE0E74DF72D557E12511D0551E4363155CF7085E 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticipantStatus_tBE0E74DF72D557E12511D0551E4363155CF7085E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/RealTimeRoomStatus
struct RealTimeRoomStatus_tE64484FAEF213DDB363CC247E606E7C14EE1C5B3 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/RealTimeRoomStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RealTimeRoomStatus_tE64484FAEF213DDB363CC247E606E7C14EE1C5B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy
struct SnapshotConflictPolicy_t6C981790D6DC2E3A2E59D7217EF64D379A126E38 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnapshotConflictPolicy_t6C981790D6DC2E3A2E59D7217EF64D379A126E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/VideoCaptureMode
struct VideoCaptureMode_t541F847667C10F28F593C4BE202044B518FDE465 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/VideoCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoCaptureMode_t541F847667C10F28F593C4BE202044B518FDE465, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/VideoCaptureOverlayState
struct VideoCaptureOverlayState_tB00FC43CA4193E6C8C5B0A00F4A80D103F921485 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/VideoCaptureOverlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoCaptureOverlayState_tB00FC43CA4193E6C8C5B0A00F4A80D103F921485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.Cwrapper.Types/VideoQualityLevel
struct VideoQualityLevel_t31752999CD2CA31A63EF36BF56830BFFD3EF7837 
{
public:
	// System.Int32 GooglePlayGames.Native.Cwrapper.Types/VideoQualityLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoQualityLevel_t31752999CD2CA31A63EF36BF56830BFFD3EF7837, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// objectManager/ColorType
struct ColorType_tE9F0B59123D043EF7E38E3A04E85FF8A2EC1CE0F 
{
public:
	// System.Int32 objectManager/ColorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorType_tE9F0B59123D043EF7E38E3A04E85FF8A2EC1CE0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser/TOKEN
struct TOKEN_t731296279CCF3E07F3655C6DCAFBCF0C034B955E 
{
public:
	// System.Int32 GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t731296279CCF3E07F3655C6DCAFBCF0C034B955E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t65D5D41A50C684991EE67BBA176E19FAE7D85D14  : public RuntimeObject
{
public:
	// GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * ___U3CU3E4__this_0;
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::discoveredEndpoint
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ___discoveredEndpoint_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t65D5D41A50C684991EE67BBA176E19FAE7D85D14, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_discoveredEndpoint_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t65D5D41A50C684991EE67BBA176E19FAE7D85D14, ___discoveredEndpoint_1)); }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  get_discoveredEndpoint_1() const { return ___discoveredEndpoint_1; }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * get_address_of_discoveredEndpoint_1() { return &___discoveredEndpoint_1; }
	inline void set_discoveredEndpoint_1(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  value)
	{
		___discoveredEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mServiceId_2), (void*)NULL);
		#endif
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GooglePlayGames.Native.PInvoke.BaseReferenceHolder
struct BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef GooglePlayGames.Native.PInvoke.BaseReferenceHolder::mSelfPointer
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___mSelfPointer_1;

public:
	inline static int32_t get_offset_of_mSelfPointer_1() { return static_cast<int32_t>(offsetof(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255, ___mSelfPointer_1)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_mSelfPointer_1() const { return ___mSelfPointer_1; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_mSelfPointer_1() { return &___mSelfPointer_1; }
	inline void set_mSelfPointer_1(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___mSelfPointer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mSelfPointer_1))->___m_wrapper_0), (void*)NULL);
	}
};

struct BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.PInvoke.BaseReferenceHolder> GooglePlayGames.Native.PInvoke.BaseReferenceHolder::_refs
	Dictionary_2_t8A96942823873BB2FA7C3135BF04E0E5358721E3 * ____refs_0;

public:
	inline static int32_t get_offset_of__refs_0() { return static_cast<int32_t>(offsetof(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_StaticFields, ____refs_0)); }
	inline Dictionary_2_t8A96942823873BB2FA7C3135BF04E0E5358721E3 * get__refs_0() const { return ____refs_0; }
	inline Dictionary_2_t8A96942823873BB2FA7C3135BF04E0E5358721E3 ** get_address_of__refs_0() { return &____refs_0; }
	inline void set__refs_0(Dictionary_2_t8A96942823873BB2FA7C3135BF04E0E5358721E3 * value)
	{
		____refs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refs_0), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType GooglePlayGames.BasicApi.Multiplayer.Invitation::mInvitationType
	int32_t ___mInvitationType_1;
	// System.String GooglePlayGames.BasicApi.Multiplayer.Invitation::mInvitationId
	String_t* ___mInvitationId_2;
	// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.Invitation::mInviter
	Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * ___mInviter_3;
	// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Invitation::mVariant
	int32_t ___mVariant_4;
	// System.Int64 GooglePlayGames.BasicApi.Multiplayer.Invitation::mCreationTime
	int64_t ___mCreationTime_5;

public:
	inline static int32_t get_offset_of_mInvitationType_1() { return static_cast<int32_t>(offsetof(Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F, ___mInvitationType_1)); }
	inline int32_t get_mInvitationType_1() const { return ___mInvitationType_1; }
	inline int32_t* get_address_of_mInvitationType_1() { return &___mInvitationType_1; }
	inline void set_mInvitationType_1(int32_t value)
	{
		___mInvitationType_1 = value;
	}

	inline static int32_t get_offset_of_mInvitationId_2() { return static_cast<int32_t>(offsetof(Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F, ___mInvitationId_2)); }
	inline String_t* get_mInvitationId_2() const { return ___mInvitationId_2; }
	inline String_t** get_address_of_mInvitationId_2() { return &___mInvitationId_2; }
	inline void set_mInvitationId_2(String_t* value)
	{
		___mInvitationId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInvitationId_2), (void*)value);
	}

	inline static int32_t get_offset_of_mInviter_3() { return static_cast<int32_t>(offsetof(Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F, ___mInviter_3)); }
	inline Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * get_mInviter_3() const { return ___mInviter_3; }
	inline Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B ** get_address_of_mInviter_3() { return &___mInviter_3; }
	inline void set_mInviter_3(Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * value)
	{
		___mInviter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInviter_3), (void*)value);
	}

	inline static int32_t get_offset_of_mVariant_4() { return static_cast<int32_t>(offsetof(Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F, ___mVariant_4)); }
	inline int32_t get_mVariant_4() const { return ___mVariant_4; }
	inline int32_t* get_address_of_mVariant_4() { return &___mVariant_4; }
	inline void set_mVariant_4(int32_t value)
	{
		___mVariant_4 = value;
	}

	inline static int32_t get_offset_of_mCreationTime_5() { return static_cast<int32_t>(offsetof(Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F, ___mCreationTime_5)); }
	inline int64_t get_mCreationTime_5() const { return ___mCreationTime_5; }
	inline int64_t* get_address_of_mCreationTime_5() { return &___mCreationTime_5; }
	inline void set_mCreationTime_5(int64_t value)
	{
		___mCreationTime_5 = value;
	}
};

struct Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F_StaticFields
{
public:
	// System.DateTime GooglePlayGames.BasicApi.Multiplayer.Invitation::UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpoch_0 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * ___mScores_7;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mStatus_1() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mStatus_1)); }
	inline int32_t get_mStatus_1() const { return ___mStatus_1; }
	inline int32_t* get_address_of_mStatus_1() { return &___mStatus_1; }
	inline void set_mStatus_1(int32_t value)
	{
		___mStatus_1 = value;
	}

	inline static int32_t get_offset_of_mApproxCount_2() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mApproxCount_2)); }
	inline uint64_t get_mApproxCount_2() const { return ___mApproxCount_2; }
	inline uint64_t* get_address_of_mApproxCount_2() { return &___mApproxCount_2; }
	inline void set_mApproxCount_2(uint64_t value)
	{
		___mApproxCount_2 = value;
	}

	inline static int32_t get_offset_of_mTitle_3() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mTitle_3)); }
	inline String_t* get_mTitle_3() const { return ___mTitle_3; }
	inline String_t** get_address_of_mTitle_3() { return &___mTitle_3; }
	inline void set_mTitle_3(String_t* value)
	{
		___mTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerScore_4() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mPlayerScore_4)); }
	inline RuntimeObject* get_mPlayerScore_4() const { return ___mPlayerScore_4; }
	inline RuntimeObject** get_address_of_mPlayerScore_4() { return &___mPlayerScore_4; }
	inline void set_mPlayerScore_4(RuntimeObject* value)
	{
		___mPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPrevPage_5() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mPrevPage_5)); }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * get_mPrevPage_5() const { return ___mPrevPage_5; }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 ** get_address_of_mPrevPage_5() { return &___mPrevPage_5; }
	inline void set_mPrevPage_5(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * value)
	{
		___mPrevPage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPrevPage_5), (void*)value);
	}

	inline static int32_t get_offset_of_mNextPage_6() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mNextPage_6)); }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * get_mNextPage_6() const { return ___mNextPage_6; }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 ** get_address_of_mNextPage_6() { return &___mNextPage_6; }
	inline void set_mNextPage_6(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * value)
	{
		___mNextPage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNextPage_6), (void*)value);
	}

	inline static int32_t get_offset_of_mScores_7() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mScores_7)); }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * get_mScores_7() const { return ___mScores_7; }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD ** get_address_of_mScores_7() { return &___mScores_7; }
	inline void set_mScores_7(List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * value)
	{
		___mScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScores_7), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::mParticipantId
	String_t* ___mParticipantId_1;
	// GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus GooglePlayGames.BasicApi.Multiplayer.Participant::mStatus
	int32_t ___mStatus_2;
	// GooglePlayGames.BasicApi.Multiplayer.Player GooglePlayGames.BasicApi.Multiplayer.Participant::mPlayer
	Player_tDD815064FEE41E79AF80329C22B6CB741D91DB36 * ___mPlayer_3;
	// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::mIsConnectedToRoom
	bool ___mIsConnectedToRoom_4;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_mParticipantId_1() { return static_cast<int32_t>(offsetof(Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B, ___mParticipantId_1)); }
	inline String_t* get_mParticipantId_1() const { return ___mParticipantId_1; }
	inline String_t** get_address_of_mParticipantId_1() { return &___mParticipantId_1; }
	inline void set_mParticipantId_1(String_t* value)
	{
		___mParticipantId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParticipantId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mStatus_2() { return static_cast<int32_t>(offsetof(Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B, ___mStatus_2)); }
	inline int32_t get_mStatus_2() const { return ___mStatus_2; }
	inline int32_t* get_address_of_mStatus_2() { return &___mStatus_2; }
	inline void set_mStatus_2(int32_t value)
	{
		___mStatus_2 = value;
	}

	inline static int32_t get_offset_of_mPlayer_3() { return static_cast<int32_t>(offsetof(Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B, ___mPlayer_3)); }
	inline Player_tDD815064FEE41E79AF80329C22B6CB741D91DB36 * get_mPlayer_3() const { return ___mPlayer_3; }
	inline Player_tDD815064FEE41E79AF80329C22B6CB741D91DB36 ** get_address_of_mPlayer_3() { return &___mPlayer_3; }
	inline void set_mPlayer_3(Player_tDD815064FEE41E79AF80329C22B6CB741D91DB36 * value)
	{
		___mPlayer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayer_3), (void*)value);
	}

	inline static int32_t get_offset_of_mIsConnectedToRoom_4() { return static_cast<int32_t>(offsetof(Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B, ___mIsConnectedToRoom_4)); }
	inline bool get_mIsConnectedToRoom_4() const { return ___mIsConnectedToRoom_4; }
	inline bool* get_address_of_mIsConnectedToRoom_4() { return &___mIsConnectedToRoom_4; }
	inline void set_mIsConnectedToRoom_4(bool value)
	{
		___mIsConnectedToRoom_4 = value;
	}
};


// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesLeaderboard::mId
	String_t* ___mId_0;
	// UnityEngine.SocialPlatforms.UserScope GooglePlayGames.PlayGamesLeaderboard::mUserScope
	int32_t ___mUserScope_1;
	// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::mRange
	Range_t70C133E51417BC822E878050C90A577A69B671DC  ___mRange_2;
	// UnityEngine.SocialPlatforms.TimeScope GooglePlayGames.PlayGamesLeaderboard::mTimeScope
	int32_t ___mTimeScope_3;
	// System.String[] GooglePlayGames.PlayGamesLeaderboard::mFilteredUserIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mFilteredUserIds_4;
	// System.Boolean GooglePlayGames.PlayGamesLeaderboard::mLoading
	bool ___mLoading_5;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.PlayGamesLeaderboard::mLocalUserScore
	RuntimeObject* ___mLocalUserScore_6;
	// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::mMaxRange
	uint32_t ___mMaxRange_7;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.PlayGamesLeaderboard::mScoreList
	List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * ___mScoreList_8;
	// System.String GooglePlayGames.PlayGamesLeaderboard::mTitle
	String_t* ___mTitle_9;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mUserScope_1() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mUserScope_1)); }
	inline int32_t get_mUserScope_1() const { return ___mUserScope_1; }
	inline int32_t* get_address_of_mUserScope_1() { return &___mUserScope_1; }
	inline void set_mUserScope_1(int32_t value)
	{
		___mUserScope_1 = value;
	}

	inline static int32_t get_offset_of_mRange_2() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mRange_2)); }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC  get_mRange_2() const { return ___mRange_2; }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC * get_address_of_mRange_2() { return &___mRange_2; }
	inline void set_mRange_2(Range_t70C133E51417BC822E878050C90A577A69B671DC  value)
	{
		___mRange_2 = value;
	}

	inline static int32_t get_offset_of_mTimeScope_3() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mTimeScope_3)); }
	inline int32_t get_mTimeScope_3() const { return ___mTimeScope_3; }
	inline int32_t* get_address_of_mTimeScope_3() { return &___mTimeScope_3; }
	inline void set_mTimeScope_3(int32_t value)
	{
		___mTimeScope_3 = value;
	}

	inline static int32_t get_offset_of_mFilteredUserIds_4() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mFilteredUserIds_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mFilteredUserIds_4() const { return ___mFilteredUserIds_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mFilteredUserIds_4() { return &___mFilteredUserIds_4; }
	inline void set_mFilteredUserIds_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mFilteredUserIds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFilteredUserIds_4), (void*)value);
	}

	inline static int32_t get_offset_of_mLoading_5() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mLoading_5)); }
	inline bool get_mLoading_5() const { return ___mLoading_5; }
	inline bool* get_address_of_mLoading_5() { return &___mLoading_5; }
	inline void set_mLoading_5(bool value)
	{
		___mLoading_5 = value;
	}

	inline static int32_t get_offset_of_mLocalUserScore_6() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mLocalUserScore_6)); }
	inline RuntimeObject* get_mLocalUserScore_6() const { return ___mLocalUserScore_6; }
	inline RuntimeObject** get_address_of_mLocalUserScore_6() { return &___mLocalUserScore_6; }
	inline void set_mLocalUserScore_6(RuntimeObject* value)
	{
		___mLocalUserScore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUserScore_6), (void*)value);
	}

	inline static int32_t get_offset_of_mMaxRange_7() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mMaxRange_7)); }
	inline uint32_t get_mMaxRange_7() const { return ___mMaxRange_7; }
	inline uint32_t* get_address_of_mMaxRange_7() { return &___mMaxRange_7; }
	inline void set_mMaxRange_7(uint32_t value)
	{
		___mMaxRange_7 = value;
	}

	inline static int32_t get_offset_of_mScoreList_8() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mScoreList_8)); }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * get_mScoreList_8() const { return ___mScoreList_8; }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD ** get_address_of_mScoreList_8() { return &___mScoreList_8; }
	inline void set_mScoreList_8(List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * value)
	{
		___mScoreList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScoreList_8), (void*)value);
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mMatchId
	String_t* ___mMatchId_1;
	// System.Byte[] GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mData_2;
	// System.Boolean GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mCanRematch
	bool ___mCanRematch_3;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mAvailableAutomatchSlots
	uint32_t ___mAvailableAutomatchSlots_4;
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mSelfParticipantId
	String_t* ___mSelfParticipantId_5;
	// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mParticipants
	List_1_tDBE9E658DBAF6579C6CBC0C4CA1CF0CE80B6032C * ___mParticipants_6;
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mPendingParticipantId
	String_t* ___mPendingParticipantId_7;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mTurnStatus
	int32_t ___mTurnStatus_8;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mMatchStatus
	int32_t ___mMatchStatus_9;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mVariant
	uint32_t ___mVariant_10;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mVersion
	uint32_t ___mVersion_11;
	// System.Int64 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mCreationTime
	int64_t ___mCreationTime_12;
	// System.Int64 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mLastUpdateTime
	int64_t ___mLastUpdateTime_13;

public:
	inline static int32_t get_offset_of_mMatchId_1() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mMatchId_1)); }
	inline String_t* get_mMatchId_1() const { return ___mMatchId_1; }
	inline String_t** get_address_of_mMatchId_1() { return &___mMatchId_1; }
	inline void set_mMatchId_1(String_t* value)
	{
		___mMatchId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMatchId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mData_2() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mData_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mData_2() const { return ___mData_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mData_2() { return &___mData_2; }
	inline void set_mData_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mData_2), (void*)value);
	}

	inline static int32_t get_offset_of_mCanRematch_3() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mCanRematch_3)); }
	inline bool get_mCanRematch_3() const { return ___mCanRematch_3; }
	inline bool* get_address_of_mCanRematch_3() { return &___mCanRematch_3; }
	inline void set_mCanRematch_3(bool value)
	{
		___mCanRematch_3 = value;
	}

	inline static int32_t get_offset_of_mAvailableAutomatchSlots_4() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mAvailableAutomatchSlots_4)); }
	inline uint32_t get_mAvailableAutomatchSlots_4() const { return ___mAvailableAutomatchSlots_4; }
	inline uint32_t* get_address_of_mAvailableAutomatchSlots_4() { return &___mAvailableAutomatchSlots_4; }
	inline void set_mAvailableAutomatchSlots_4(uint32_t value)
	{
		___mAvailableAutomatchSlots_4 = value;
	}

	inline static int32_t get_offset_of_mSelfParticipantId_5() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mSelfParticipantId_5)); }
	inline String_t* get_mSelfParticipantId_5() const { return ___mSelfParticipantId_5; }
	inline String_t** get_address_of_mSelfParticipantId_5() { return &___mSelfParticipantId_5; }
	inline void set_mSelfParticipantId_5(String_t* value)
	{
		___mSelfParticipantId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSelfParticipantId_5), (void*)value);
	}

	inline static int32_t get_offset_of_mParticipants_6() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mParticipants_6)); }
	inline List_1_tDBE9E658DBAF6579C6CBC0C4CA1CF0CE80B6032C * get_mParticipants_6() const { return ___mParticipants_6; }
	inline List_1_tDBE9E658DBAF6579C6CBC0C4CA1CF0CE80B6032C ** get_address_of_mParticipants_6() { return &___mParticipants_6; }
	inline void set_mParticipants_6(List_1_tDBE9E658DBAF6579C6CBC0C4CA1CF0CE80B6032C * value)
	{
		___mParticipants_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParticipants_6), (void*)value);
	}

	inline static int32_t get_offset_of_mPendingParticipantId_7() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mPendingParticipantId_7)); }
	inline String_t* get_mPendingParticipantId_7() const { return ___mPendingParticipantId_7; }
	inline String_t** get_address_of_mPendingParticipantId_7() { return &___mPendingParticipantId_7; }
	inline void set_mPendingParticipantId_7(String_t* value)
	{
		___mPendingParticipantId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPendingParticipantId_7), (void*)value);
	}

	inline static int32_t get_offset_of_mTurnStatus_8() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mTurnStatus_8)); }
	inline int32_t get_mTurnStatus_8() const { return ___mTurnStatus_8; }
	inline int32_t* get_address_of_mTurnStatus_8() { return &___mTurnStatus_8; }
	inline void set_mTurnStatus_8(int32_t value)
	{
		___mTurnStatus_8 = value;
	}

	inline static int32_t get_offset_of_mMatchStatus_9() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mMatchStatus_9)); }
	inline int32_t get_mMatchStatus_9() const { return ___mMatchStatus_9; }
	inline int32_t* get_address_of_mMatchStatus_9() { return &___mMatchStatus_9; }
	inline void set_mMatchStatus_9(int32_t value)
	{
		___mMatchStatus_9 = value;
	}

	inline static int32_t get_offset_of_mVariant_10() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mVariant_10)); }
	inline uint32_t get_mVariant_10() const { return ___mVariant_10; }
	inline uint32_t* get_address_of_mVariant_10() { return &___mVariant_10; }
	inline void set_mVariant_10(uint32_t value)
	{
		___mVariant_10 = value;
	}

	inline static int32_t get_offset_of_mVersion_11() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mVersion_11)); }
	inline uint32_t get_mVersion_11() const { return ___mVersion_11; }
	inline uint32_t* get_address_of_mVersion_11() { return &___mVersion_11; }
	inline void set_mVersion_11(uint32_t value)
	{
		___mVersion_11 = value;
	}

	inline static int32_t get_offset_of_mCreationTime_12() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mCreationTime_12)); }
	inline int64_t get_mCreationTime_12() const { return ___mCreationTime_12; }
	inline int64_t* get_address_of_mCreationTime_12() { return &___mCreationTime_12; }
	inline void set_mCreationTime_12(int64_t value)
	{
		___mCreationTime_12 = value;
	}

	inline static int32_t get_offset_of_mLastUpdateTime_13() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D, ___mLastUpdateTime_13)); }
	inline int64_t get_mLastUpdateTime_13() const { return ___mLastUpdateTime_13; }
	inline int64_t* get_address_of_mLastUpdateTime_13() { return &___mLastUpdateTime_13; }
	inline void set_mLastUpdateTime_13(int64_t value)
	{
		___mLastUpdateTime_13 = value;
	}
};

struct TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D_StaticFields
{
public:
	// System.DateTime GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpoch_0 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B 
{
public:
	// System.String GameAnalyticsSDK.Setup.Settings/HelpInfo::Message
	String_t* ___Message_0;
	// GameAnalyticsSDK.Setup.Settings/MessageTypes GameAnalyticsSDK.Setup.Settings/HelpInfo::MsgType
	int32_t ___MsgType_1;
	// GameAnalyticsSDK.Setup.Settings/HelpTypes GameAnalyticsSDK.Setup.Settings/HelpInfo::HelpType
	int32_t ___HelpType_2;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_0), (void*)value);
	}

	inline static int32_t get_offset_of_MsgType_1() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___MsgType_1)); }
	inline int32_t get_MsgType_1() const { return ___MsgType_1; }
	inline int32_t* get_address_of_MsgType_1() { return &___MsgType_1; }
	inline void set_MsgType_1(int32_t value)
	{
		___MsgType_1 = value;
	}

	inline static int32_t get_offset_of_HelpType_2() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___HelpType_2)); }
	inline int32_t get_HelpType_2() const { return ___HelpType_2; }
	inline int32_t* get_address_of_HelpType_2() { return &___HelpType_2; }
	inline void set_HelpType_2(int32_t value)
	{
		___HelpType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke
{
	char* ___Message_0;
	int32_t ___MsgType_1;
	int32_t ___HelpType_2;
};
// Native definition for COM marshalling of GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com
{
	Il2CppChar* ___Message_0;
	int32_t ___MsgType_1;
	int32_t ___HelpType_2;
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t7570552C35A220ADB9666809E4D57E4C10713634  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>
struct Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>
struct Action_2_t41314D780C99FC8FB674545B1779785C340CCE10  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativePlayer>
struct Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata>
struct Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>
struct OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};

struct MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus> GooglePlayGames.Native.PInvoke.MultiplayerParticipant::StatusConversion
	Dictionary_2_tF013E192C8D273F30EA0D1F7162FE154A9EBE4E0 * ___StatusConversion_2;

public:
	inline static int32_t get_offset_of_StatusConversion_2() { return static_cast<int32_t>(offsetof(MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4_StaticFields, ___StatusConversion_2)); }
	inline Dictionary_2_tF013E192C8D273F30EA0D1F7162FE154A9EBE4E0 * get_StatusConversion_2() const { return ___StatusConversion_2; }
	inline Dictionary_2_tF013E192C8D273F30EA0D1F7162FE154A9EBE4E0 ** get_address_of_StatusConversion_2() { return &___StatusConversion_2; }
	inline void set_StatusConversion_2(Dictionary_2_tF013E192C8D273F30EA0D1F7162FE154A9EBE4E0 * value)
	{
		___StatusConversion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StatusConversion_2), (void*)value);
	}
};


// GooglePlayGames.Native.PInvoke.NativeEvent
struct NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.NativePlayer
struct NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.NativePlayerStats
struct NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse
struct PlayerSelectUIResponse_t6251E72736AEC4DA7D0FCA139A204E3923753910  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig
struct TurnBasedMatchConfig_t933F7F5402EED63C21EF0FA069DBE9319C0C45CA  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod
struct OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback
struct FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback
struct FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback
struct FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse
struct FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse
struct FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse
struct FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback
struct OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback
struct OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback
struct OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnParticipantStatusChangedCallback
struct OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomConnectedSetChangedCallback
struct OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomStatusChangedCallback
struct OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback
struct FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback
struct LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback
struct RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback
struct RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback
struct SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback
struct WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse
struct FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse
struct RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse
struct WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback
struct CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback
struct FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback
struct OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback
struct ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback
struct SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse
struct CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse
struct FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse
struct OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse
struct ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse
struct SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback
struct FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse
struct FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse
struct MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t6D181C2BA99E27BBD0AEDA7B4C2DA9E2414EA2F4  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse
struct TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse
struct TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7  : public BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback
struct MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback
struct MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback
struct TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.VideoManager/CaptureCapabilitiesCallback
struct CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.VideoManager/CaptureStateCallback
struct CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.Native.Cwrapper.VideoManager/IsCaptureAvailableCallback
struct IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// SpawnManager
struct SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 SpawnManager::wave
	int32_t ___wave_4;
	// UnityEngine.GameObject SpawnManager::asteroidPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___asteroidPrefab_5;
	// UnityEngine.GameObject SpawnManager::wallPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallPrefab_6;
	// UnityEngine.GameObject SpawnManager::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_7;
	// UnityEngine.GameObject SpawnManager::bossPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bossPrefab_8;
	// System.Single SpawnManager::respawnTime
	float ___respawnTime_9;
	// UnityEngine.Vector2 SpawnManager::ScreenBoundStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ScreenBoundStart_10;
	// System.Single SpawnManager::timer
	float ___timer_11;
	// System.Single SpawnManager::timerChangeColor
	float ___timerChangeColor_12;
	// System.Single SpawnManager::waitingTime
	float ___waitingTime_13;
	// objectManager/ColorType SpawnManager::newColor
	int32_t ___newColor_14;
	// System.Boolean SpawnManager::spawnEnemy
	bool ___spawnEnemy_15;
	// System.Boolean SpawnManager::spawnBoss
	bool ___spawnBoss_16;

public:
	inline static int32_t get_offset_of_wave_4() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___wave_4)); }
	inline int32_t get_wave_4() const { return ___wave_4; }
	inline int32_t* get_address_of_wave_4() { return &___wave_4; }
	inline void set_wave_4(int32_t value)
	{
		___wave_4 = value;
	}

	inline static int32_t get_offset_of_asteroidPrefab_5() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___asteroidPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_asteroidPrefab_5() const { return ___asteroidPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_asteroidPrefab_5() { return &___asteroidPrefab_5; }
	inline void set_asteroidPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___asteroidPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asteroidPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_wallPrefab_6() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___wallPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallPrefab_6() const { return ___wallPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallPrefab_6() { return &___wallPrefab_6; }
	inline void set_wallPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyPrefab_7() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___enemyPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_7() const { return ___enemyPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_7() { return &___enemyPrefab_7; }
	inline void set_enemyPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_bossPrefab_8() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___bossPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bossPrefab_8() const { return ___bossPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bossPrefab_8() { return &___bossPrefab_8; }
	inline void set_bossPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bossPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_respawnTime_9() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___respawnTime_9)); }
	inline float get_respawnTime_9() const { return ___respawnTime_9; }
	inline float* get_address_of_respawnTime_9() { return &___respawnTime_9; }
	inline void set_respawnTime_9(float value)
	{
		___respawnTime_9 = value;
	}

	inline static int32_t get_offset_of_ScreenBoundStart_10() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___ScreenBoundStart_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ScreenBoundStart_10() const { return ___ScreenBoundStart_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ScreenBoundStart_10() { return &___ScreenBoundStart_10; }
	inline void set_ScreenBoundStart_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ScreenBoundStart_10 = value;
	}

	inline static int32_t get_offset_of_timer_11() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___timer_11)); }
	inline float get_timer_11() const { return ___timer_11; }
	inline float* get_address_of_timer_11() { return &___timer_11; }
	inline void set_timer_11(float value)
	{
		___timer_11 = value;
	}

	inline static int32_t get_offset_of_timerChangeColor_12() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___timerChangeColor_12)); }
	inline float get_timerChangeColor_12() const { return ___timerChangeColor_12; }
	inline float* get_address_of_timerChangeColor_12() { return &___timerChangeColor_12; }
	inline void set_timerChangeColor_12(float value)
	{
		___timerChangeColor_12 = value;
	}

	inline static int32_t get_offset_of_waitingTime_13() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___waitingTime_13)); }
	inline float get_waitingTime_13() const { return ___waitingTime_13; }
	inline float* get_address_of_waitingTime_13() { return &___waitingTime_13; }
	inline void set_waitingTime_13(float value)
	{
		___waitingTime_13 = value;
	}

	inline static int32_t get_offset_of_newColor_14() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___newColor_14)); }
	inline int32_t get_newColor_14() const { return ___newColor_14; }
	inline int32_t* get_address_of_newColor_14() { return &___newColor_14; }
	inline void set_newColor_14(int32_t value)
	{
		___newColor_14 = value;
	}

	inline static int32_t get_offset_of_spawnEnemy_15() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___spawnEnemy_15)); }
	inline bool get_spawnEnemy_15() const { return ___spawnEnemy_15; }
	inline bool* get_address_of_spawnEnemy_15() { return &___spawnEnemy_15; }
	inline void set_spawnEnemy_15(bool value)
	{
		___spawnEnemy_15 = value;
	}

	inline static int32_t get_offset_of_spawnBoss_16() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___spawnBoss_16)); }
	inline bool get_spawnBoss_16() const { return ___spawnBoss_16; }
	inline bool* get_address_of_spawnBoss_16() { return &___spawnBoss_16; }
	inline void set_spawnBoss_16(bool value)
	{
		___spawnBoss_16 = value;
	}
};


// objectManager
struct objectManager_tEE889BCFB9FF90783A91791BD38604105263D26F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// soundbites objectManager::sb
	soundbites_t257553EEBDA24FEE9538D7156835431412609421 * ___sb_4;
	// System.Single objectManager::speed
	float ___speed_5;
	// UnityEngine.Vector2 objectManager::ScreenBoundStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ScreenBoundStart_6;
	// System.Single objectManager::life
	float ___life_7;
	// objectManager/ColorType objectManager::_ColorType
	int32_t ____ColorType_8;

public:
	inline static int32_t get_offset_of_sb_4() { return static_cast<int32_t>(offsetof(objectManager_tEE889BCFB9FF90783A91791BD38604105263D26F, ___sb_4)); }
	inline soundbites_t257553EEBDA24FEE9538D7156835431412609421 * get_sb_4() const { return ___sb_4; }
	inline soundbites_t257553EEBDA24FEE9538D7156835431412609421 ** get_address_of_sb_4() { return &___sb_4; }
	inline void set_sb_4(soundbites_t257553EEBDA24FEE9538D7156835431412609421 * value)
	{
		___sb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sb_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(objectManager_tEE889BCFB9FF90783A91791BD38604105263D26F, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_ScreenBoundStart_6() { return static_cast<int32_t>(offsetof(objectManager_tEE889BCFB9FF90783A91791BD38604105263D26F, ___ScreenBoundStart_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ScreenBoundStart_6() const { return ___ScreenBoundStart_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ScreenBoundStart_6() { return &___ScreenBoundStart_6; }
	inline void set_ScreenBoundStart_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ScreenBoundStart_6 = value;
	}

	inline static int32_t get_offset_of_life_7() { return static_cast<int32_t>(offsetof(objectManager_tEE889BCFB9FF90783A91791BD38604105263D26F, ___life_7)); }
	inline float get_life_7() const { return ___life_7; }
	inline float* get_address_of_life_7() { return &___life_7; }
	inline void set_life_7(float value)
	{
		___life_7 = value;
	}

	inline static int32_t get_offset_of__ColorType_8() { return static_cast<int32_t>(offsetof(objectManager_tEE889BCFB9FF90783A91791BD38604105263D26F, ____ColorType_8)); }
	inline int32_t get__ColorType_8() const { return ____ColorType_8; }
	inline int32_t* get_address_of__ColorType_8() { return &____ColorType_8; }
	inline void set__ColorType_8(int32_t value)
	{
		____ColorType_8 = value;
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public objectManager_tEE889BCFB9FF90783A91791BD38604105263D26F
{
public:
	// UnityEngine.Transform Enemy::enemy
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___enemy_9;
	// System.Boolean Enemy::moveUpDown
	bool ___moveUpDown_10;
	// UnityEngine.SpriteRenderer Enemy::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_11;
	// UnityEngine.GameObject Enemy::eBulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___eBulletPrefab_12;
	// System.Single Enemy::timer
	float ___timer_13;
	// System.Single Enemy::waitingTime
	float ___waitingTime_14;
	// UnityEngine.GameObject Enemy::spawnmanager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnmanager_15;
	// System.Single Enemy::timerChangeColor
	float ___timerChangeColor_16;
	// System.Single Enemy::timeToDie
	float ___timeToDie_17;
	// objectManager/ColorType Enemy::newColor
	int32_t ___newColor_18;

public:
	inline static int32_t get_offset_of_enemy_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemy_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_enemy_9() const { return ___enemy_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_enemy_9() { return &___enemy_9; }
	inline void set_enemy_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___enemy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_9), (void*)value);
	}

	inline static int32_t get_offset_of_moveUpDown_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___moveUpDown_10)); }
	inline bool get_moveUpDown_10() const { return ___moveUpDown_10; }
	inline bool* get_address_of_moveUpDown_10() { return &___moveUpDown_10; }
	inline void set_moveUpDown_10(bool value)
	{
		___moveUpDown_10 = value;
	}

	inline static int32_t get_offset_of_sprite_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___sprite_11)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_11() const { return ___sprite_11; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_11() { return &___sprite_11; }
	inline void set_sprite_11(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_11), (void*)value);
	}

	inline static int32_t get_offset_of_eBulletPrefab_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___eBulletPrefab_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_eBulletPrefab_12() const { return ___eBulletPrefab_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_eBulletPrefab_12() { return &___eBulletPrefab_12; }
	inline void set_eBulletPrefab_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___eBulletPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eBulletPrefab_12), (void*)value);
	}

	inline static int32_t get_offset_of_timer_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___timer_13)); }
	inline float get_timer_13() const { return ___timer_13; }
	inline float* get_address_of_timer_13() { return &___timer_13; }
	inline void set_timer_13(float value)
	{
		___timer_13 = value;
	}

	inline static int32_t get_offset_of_waitingTime_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___waitingTime_14)); }
	inline float get_waitingTime_14() const { return ___waitingTime_14; }
	inline float* get_address_of_waitingTime_14() { return &___waitingTime_14; }
	inline void set_waitingTime_14(float value)
	{
		___waitingTime_14 = value;
	}

	inline static int32_t get_offset_of_spawnmanager_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___spawnmanager_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnmanager_15() const { return ___spawnmanager_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnmanager_15() { return &___spawnmanager_15; }
	inline void set_spawnmanager_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnmanager_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnmanager_15), (void*)value);
	}

	inline static int32_t get_offset_of_timerChangeColor_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___timerChangeColor_16)); }
	inline float get_timerChangeColor_16() const { return ___timerChangeColor_16; }
	inline float* get_address_of_timerChangeColor_16() { return &___timerChangeColor_16; }
	inline void set_timerChangeColor_16(float value)
	{
		___timerChangeColor_16 = value;
	}

	inline static int32_t get_offset_of_timeToDie_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___timeToDie_17)); }
	inline float get_timeToDie_17() const { return ___timeToDie_17; }
	inline float* get_address_of_timeToDie_17() { return &___timeToDie_17; }
	inline void set_timeToDie_17(float value)
	{
		___timeToDie_17 = value;
	}

	inline static int32_t get_offset_of_newColor_18() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___newColor_18)); }
	inline int32_t get_newColor_18() const { return ___newColor_18; }
	inline int32_t* get_address_of_newColor_18() { return &___newColor_18; }
	inline void set_newColor_18(int32_t value)
	{
		___newColor_18 = value;
	}
};


// boss
struct boss_t7103983475D183857493FCA2A27B2EE9F5FB1906  : public Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * m_Items[1];

public:
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Func`2<System.UIntPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m28688D2F4309F62C35F89C20F44280CA528F8DA5_gshared (Func_2_t34579A35D0D2AC2DB950492D4C4A7E21F6BB24C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToEnumerator<System.Object>(System.UIntPtr,System.Func`2<System.UIntPtr,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PInvokeUtilities_ToEnumerator_TisRuntimeObject_mD6CA83F40D1FA7CE0F77DB37EA418CC9FCD0495D_gshared (uintptr_t ___size0, Func_2_t34579A35D0D2AC2DB950492D4C4A7E21F6BB24C3 * ___getElement1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T> GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToEnumerable<System.Object>(System.UIntPtr,System.Func`2<System.UIntPtr,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PInvokeUtilities_ToEnumerable_TisRuntimeObject_m53C05F2465B8AB5C7D58AC5FDD6FB30F58C25F80_gshared (uintptr_t ___size0, Func_2_t34579A35D0D2AC2DB950492D4C4A7E21F6BB24C3 * ___getElement1, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutMethod_1__ctor_m447C935805C8ABA4F695666B18D5B16838436676_gshared (OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// T[] GooglePlayGames.Native.PInvoke.PInvokeUtilities::OutParamsToArray<System.Byte>(GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PInvokeUtilities_OutParamsToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5C27AA084248C2B70B01B0B00CF8A65C75493B9A_gshared (OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 * ___outMethod0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.BasicApi.Achievement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_m1AADF536FEBBA8A0950FED687ED4566391355A95 (PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC * __this, Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * ___ach0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
inline void Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * __this, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 *, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
inline void Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3 (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * __this, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 *, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* LeaderboardScoreData_get_Scores_m0A69C71CC01A46E9E4B476A77A4B8B1785189F3D (LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 *, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::HandleLoadingScores(GooglePlayGames.PlayGamesLeaderboard,GooglePlayGames.BasicApi.LeaderboardScoreData,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_HandleLoadingScores_m69FF25A7548F8E0E564F1DB56E3AB9B3BFB8AE45 (PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * __this, PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * ___board0, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___scoreData1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline (PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37 (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::HandleFetchResponse(GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector,GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_HandleFetchResponse_mA67A98F967B80167035AF85B030C3008E05724E4 (PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * __this, FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7 * ___collector0, FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * ___resp1, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::HandleFetchCollected(GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_HandleFetchCollected_mD5C386E3AA2139B012982CC20B336A59449D5F04 (PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * __this, FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * ___rsp0, Action_2_t41314D780C99FC8FB674545B1779785C340CCE10 * ___callback1, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.BaseReferenceHolder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51 (BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255 * __this, intptr_t ___pointer0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef GooglePlayGames.Native.PInvoke.BaseReferenceHolder::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5 (BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_PlayerManager_FetchListResponse_Dispose_mE05A616789414D75803521D84EE7314451E497E5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerManager_PlayerManager_FetchListResponse_GetStatus_m5F5B8D3F6A1BDC8A6E369F59BFE7877C6125F087 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t FetchListResponse_Length_mA66026014E4ACD1FF30ADFF220F2A34780E9C5AE (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativePlayer>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBBC92D761E90F49EF079B131B7436B48F5165E67 (Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m28688D2F4309F62C35F89C20F44280CA528F8DA5_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerator`1<T> GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToEnumerator<GooglePlayGames.Native.PInvoke.NativePlayer>(System.UIntPtr,System.Func`2<System.UIntPtr,T>)
inline RuntimeObject* PInvokeUtilities_ToEnumerator_TisNativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_m71D6F5A03EB5A9906B6E09F4DE2D07894163E1B7 (uintptr_t ___size0, Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F * ___getElement1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (uintptr_t, Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F *, const RuntimeMethod*))PInvokeUtilities_ToEnumerator_TisRuntimeObject_mD6CA83F40D1FA7CE0F77DB37EA418CC9FCD0495D_gshared)(___size0, ___getElement1, method);
}
// System.Collections.Generic.IEnumerator`1<GooglePlayGames.Native.PInvoke.NativePlayer> GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchListResponse_GetEnumerator_mFC69E103ACABCB3FFA12C430B4DD48597353F9AD (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t PlayerManager_PlayerManager_FetchListResponse_GetData_Length_m5D5B7F23E61553F3BFA64E894B56DC79FA82B139 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.UInt64 System.UIntPtr::ToUInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_ToUInt64_mF1EC8AE1580069E87844A57EF46876AA453ADFC8 (uintptr_t* __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchListResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PlayerManager_PlayerManager_FetchListResponse_GetData_GetElement_mAFC5397D8E061F5E8064CFD96DD42C458A04AADF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.NativePlayer::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlayer__ctor_mB0EB660855CDB646D0B5EFAA24275718046EE482 (NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.Native.PInvoke.PInvokeUtilities::IsNull(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77 (intptr_t ___pointer0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchListResponse__ctor_m45AFE7AB58DE61FD01099A604AC2EBD5840D93F9 (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// GooglePlayGames.Native.PInvoke.NativePlayer GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::GetElement(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * FetchListResponse_GetElement_m06F73DBDA460199CF318E3A8C50910F60003FEE6 (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, uintptr_t ___index0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_PlayerManager_FetchResponse_Dispose_mEE8BDE6E09E5B730BA63DC82F03700D7C031CED2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PlayerManager_PlayerManager_FetchResponse_GetData_m6E423E6863A0F66018CB2D564040FE4254D730D2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerManager_PlayerManager_FetchResponse_GetStatus_m20CD2650AB196AE9892D48E8AF85586814403CB8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchResponse__ctor_m29B934B9B66B7D97B4C543E8B2712484BB2D434D (FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<GooglePlayGames.Native.PInvoke.NativePlayer>::.ctor()
inline void List_1__ctor_mCD8ED4B409677A1E15F1040A2F31796F3CBB454A (List_1_tE7A39495D928B10103D7D9899B151155EE1915FC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7A39495D928B10103D7D9899B151155EE1915FC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerManager_PlayerManager_FetchSelfResponse_GetStatus_m666EB5A16D96DD08B2E9165D257B6EBAFD2A2C38 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_GetData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PlayerManager_PlayerManager_FetchSelfResponse_GetData_m8B82CA14AB5151C18BC1296548FE675DF6F5E133 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager::PlayerManager_FetchSelfResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_PlayerManager_FetchSelfResponse_Dispose_mA28CAE6BC4F442B63BC1F3248A38B5CB64125CF2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchSelfResponse__ctor_m618D5727B70C1CC1136CCA37B480664A2866BA42 (FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement_m078CF546026BF15B8CE889ED235039804CD743C2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_arg2, uintptr_t ___out_size3, const RuntimeMethod* method);
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * NativeRealTimeRoom_FromPointer_m2553B29926A39935E6A110F56D764895DE3B3B87 (intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.Native.PInvoke.NativeRealTimeRoom>::Invoke(!0)
inline void Action_1_Invoke_m5AEEF38D45D3E86E0256A11F747164DD7D2E9775 (Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD * __this, NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD *, NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.Native.PInvoke.BaseReferenceHolder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseReferenceHolder_Dispose_m05EDAA7CD97ECCBE88B5D254172E635690C418D3 (BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m78DC35646844B5EE18309AFACD20BA65C8AEA309 (U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.PInvoke.BaseReferenceHolder::AsPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BaseReferenceHolder_AsPointer_m4FA02CD1CEB1315996E3881A0B7D80A81B6F8E8D (BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255 * __this, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchInvitationsResponse_ResponseStatus_m2342827E93B2E42918E14F13B8C451DBD2F50A22 (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus_m575301BC516082271C982811592D4F89A7E09EAB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length_mACC72BEA7AB44FD56B65A766DAC4C2622707AD91 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.MultiplayerInvitation>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3 (Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m28688D2F4309F62C35F89C20F44280CA528F8DA5_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<T> GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToEnumerable<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>(System.UIntPtr,System.Func`2<System.UIntPtr,T>)
inline RuntimeObject* PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE (uintptr_t ___size0, Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 * ___getElement1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (uintptr_t, Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 *, const RuntimeMethod*))PInvokeUtilities_ToEnumerable_TisRuntimeObject_m53C05F2465B8AB5C7D58AC5FDD6FB30F58C25F80_gshared)(___size0, ___getElement1, method);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose_m621CB098585133B5C2AEF76B3971A145085956AB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchInvitationsResponse__ctor_m69913FDD2F9FDDAD1453B991F3059E2696C45A98 (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement_m2F5861BDD586B3F4AA409E927EB8A685DAE2129E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.MultiplayerInvitation::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerInvitation__ctor_m640001D0ADB2E2334955EFC2FB2DBE8F4EAA6F13 (MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus_m06A2055119FA4FD2423D01E7FC6F4300480849C4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealTimeRoomResponse_ResponseStatus_m37F78EE3D2370854509D894765E543DA23E71CD9 (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealTimeRoomResponse_RequestSucceeded_m4B206E222A74D9CACB22A1878CB1E5A95B9B0DDF (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom_m53B1438896AC9B2135DEBC6BB8464D2ACCF971E8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.NativeRealTimeRoom::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRealTimeRoom__ctor_m00CA2A1767C2C039C27B9EE4DDBB77B6643B3687 (NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose_mEDC250C07FB996380857D99F96F3380BD7353729 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0 (intptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeRoomResponse__ctor_m73CEDE4FA7EC6BA08C3E566EC3C76EEBA7411A35 (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus_m99F812FDAF9C0F564F50ABBD473DA126A57A7833 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInboxUIResponse_ResponseStatus_mC70DC58A9E725CD7ABD5390C072B87176431DC1C (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation_m2DC715A4019B9952B90024932CC6FF3F0C361234 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose_m31D1ABF6DBD50B270CF3C929919056639F806048 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInboxUIResponse__ctor_mF1619F15F1C5AF368C759A015336CB08AD9AF3C3 (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus_m77949A4A3EDCA4E41138315B43467BC7DBC798AB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitingRoomUIResponse_ResponseStatus_mA19A865FEEECE2FFD7893061B2D971044D1AD9F8 (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom_m1DF9D6ACA535794E258F460BF5BAE60E3D481928 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager::RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose_mEDFD92D9A6DDF4772F38461E11D295746969B6D4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitingRoomUIResponse__ctor_mB11637C5C2C5451BFEAB313F2177134F48DDC6D0 (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mA9074C6868B83433A9BA2420F813443D5F45DF8D_gshared)(___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, String_t* ___description0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
inline void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75 (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 * __this, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  ___builder0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void NativeShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__ctor_mE88CEC99E9A437191E24742736B419876555C601 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method);
// NativeShare NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_AddFile_mE44950A244FCA49E8D8320FDF870C36D45F56831 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___filePath0, String_t* ___mime1, const RuntimeMethod* method);
// NativeShare NativeShare::SetSubject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_SetSubject_m90E61507CB0A243A4E8D841E99F1EAC394668E03 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___subject0, const RuntimeMethod* method);
// NativeShare NativeShare::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_SetText_mD6DB5DC5EED309BFA85ED73FA4089DE37061EFD0 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void NativeShare::Share()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Share_mD25C91790D2CAC06A5F1216AF8090EFCF40AA04F (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SnapshotManager_SnapshotManager_CommitResponse_GetStatus_mF7DAA2D8B0A404C53D2AA91040895B53273A812D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommitResponse_ResponseStatus_m12B0B49030AC87D4528AAEBE15C0D09A29A1A3D7 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommitResponse_RequestSucceeded_m49E35504E64784822005E6FE7A49545CA4AD6A33 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_GetData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SnapshotManager_SnapshotManager_CommitResponse_GetData_mED912D1DA85E7CF60D25515BBA4B41C3E4217C6B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSnapshotMetadata__ctor_m8080941A4D636AB5433682024C3C1C8F3B1275A2 (NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotManager_SnapshotManager_CommitResponse_Dispose_m3A8AF116649CCD5E5C37EAA505B2C7817187A658 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitResponse__ctor_mFFCF672CF1535105F2239AD6F99DEEE21332A016 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SnapshotManager_SnapshotManager_FetchAllResponse_GetStatus_mBF3B9F24055BE8FC26D1D2492B35C7E614196086 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchAllResponse_ResponseStatus_m43F0ABEE5F70C7DB3A1894DE980E2A604D229889 (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t SnapshotManager_SnapshotManager_FetchAllResponse_GetData_Length_m0D6632304DA6F6DACE948AB9CFC79E51E81AFA55 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA4758B5CED4CAFF3E38540333C8412D99D328161 (Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m28688D2F4309F62C35F89C20F44280CA528F8DA5_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<T> GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToEnumerable<GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata>(System.UIntPtr,System.Func`2<System.UIntPtr,T>)
inline RuntimeObject* PInvokeUtilities_ToEnumerable_TisNativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_m8495216E39BACFAC1B85CE4D3564EA7FEFB386A5 (uintptr_t ___size0, Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527 * ___getElement1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (uintptr_t, Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527 *, const RuntimeMethod*))PInvokeUtilities_ToEnumerable_TisRuntimeObject_m53C05F2465B8AB5C7D58AC5FDD6FB30F58C25F80_gshared)(___size0, ___getElement1, method);
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotManager_SnapshotManager_FetchAllResponse_Dispose_m673C80C395F1660941DAFDA96E6DA59B5DDD610D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchAllResponse__ctor_m9076E0FA3D661C9F38CB6657984F42F499BE9785 (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SnapshotManager_SnapshotManager_FetchAllResponse_GetData_GetElement_mE6DB308664580B803B3584123C18E03E9429D0B7 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenResponse_ResponseStatus_m0465190E94B370962DDDC81E934760A869F43A68 (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SnapshotManager_SnapshotManager_OpenResponse_GetStatus_mED31676E850D79CDEC29BB38A466AD32A12F1CA3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_mAAF19348A9F0360954676471648DBFE7A6F0FEB1 (OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String GooglePlayGames.Native.PInvoke.PInvokeUtilities::OutParamsToString(GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PInvokeUtilities_OutParamsToString_m060278202999A51443F06BFD3518EF106E512063 (OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF * ___outStringMethod0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SnapshotManager_SnapshotManager_OpenResponse_GetData_mB2246F00DBF2CB30C5C56633BBD4A1C65565C6BE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictOriginal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SnapshotManager_SnapshotManager_OpenResponse_GetConflictOriginal_m3EBA900C23E9A9E2A5103ABA6D0E2C61694EF42F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictUnmerged(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SnapshotManager_SnapshotManager_OpenResponse_GetConflictUnmerged_m8F2FAF84FEDC1DDBFDDEFDAC50FAC59700E034F3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotManager_SnapshotManager_OpenResponse_Dispose_m4BE1FC50804B4522CC337EBAE1A718982FDF1576 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenResponse__ctor_mC2321B2F0E278257FB47459A45F95E04CE7AC429 (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t SnapshotManager_SnapshotManager_OpenResponse_GetConflictId_mCD61955370C82EFDC08A1FEBE1C594A0B93F3FB9 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_arg1, uintptr_t ___out_size2, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadResponse_ResponseStatus_mD43EB241720853829EF499EB3B894535336F1755 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadResponse_RequestSucceeded_m8DF677AD234E4D050E95E8024F0E7F01A68CEE83 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.Byte>::.ctor(System.Object,System.IntPtr)
inline void OutMethod_1__ctor_m447C935805C8ABA4F695666B18D5B16838436676 (OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 *, RuntimeObject *, intptr_t, const RuntimeMethod*))OutMethod_1__ctor_m447C935805C8ABA4F695666B18D5B16838436676_gshared)(__this, ___object0, ___method1, method);
}
// T[] GooglePlayGames.Native.PInvoke.PInvokeUtilities::OutParamsToArray<System.Byte>(GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<T>)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PInvokeUtilities_OutParamsToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5C27AA084248C2B70B01B0B00CF8A65C75493B9A (OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 * ___outMethod0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 *, const RuntimeMethod*))PInvokeUtilities_OutParamsToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5C27AA084248C2B70B01B0B00CF8A65C75493B9A_gshared)(___outMethod0, method);
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotManager_SnapshotManager_ReadResponse_Dispose_mECECC68D55697B2A3528611E1BB67C87703096A2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadResponse__ctor_mA54656FD44CC5E9939BEA9DAA5A3BA0F5D2987D2 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_GetData(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t SnapshotManager_SnapshotManager_ReadResponse_GetData_m2A999A1ED2AD87FA261010A9616B5CC5E45D16D5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_arg1, uintptr_t ___out_size2, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetStatus_m6A1937181B7DCBD143D0DEA98E8E8FC45240D198 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::RequestStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SnapshotSelectUIResponse_RequestStatus_m1BFCD68606C5314634666F3198126D104E2FC76C (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SnapshotSelectUIResponse_RequestSucceeded_mE97BFFB7F5921D17B8340774FCD959BCCFA43F07 (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_GetData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetData_m60481B0F3A833DD8DC6A7ED6B964A9B4D5116BDA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_Dispose_mDEA7D44E4F8D07D23CE3C628E7A8352E232226C5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotSelectUIResponse__ctor_mDDD62304DFC64583052F4D357F8DA37C474D5F22 (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void SpawnManager::SpawnAsteroid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_SpawnAsteroid_m4CA7C4C4997F26C931855B004AB7AFAD621AB10B (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, int32_t ___dificulty0, const RuntimeMethod* method);
// System.Void SpawnManager::SpawnWall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_SpawnWall_mDCA5A6AE61289EBB251F4FDE950697ED87B527E1 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, int32_t ___dificulty0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.StatsManager::StatsManager_FetchForPlayerResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StatsManager_StatsManager_FetchForPlayerResponse_GetStatus_mB2D99928C5E56B033FEEB0A12AC59E1C640A75CB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.StatsManager::StatsManager_FetchForPlayerResponse_GetData(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StatsManager_StatsManager_FetchForPlayerResponse_GetData_m2CC89973A5BD5C069D3FB73266D31EF814F10F32 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.NativePlayerStats::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlayerStats__ctor_mCDC478EA2D92A80EBDC778EC951E0C1FBE7CAFBF (NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.StatsManager::StatsManager_FetchForPlayerResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsManager_StatsManager_FetchForPlayerResponse_Dispose_m296B5A5DA420137E55A80EF14F8A978073A4081A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchForPlayerResponse__ctor_m954DF5E4770919AACF5DC2C0B7E5B9317DD7548D (FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus_m7911DA7A8770502394F8557F8C07991840D204B8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse::UiStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatchInboxUIResponse_UiStatus_m2315AB93F11B28B94886FF5B8D3F996A84FE0C5B (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch_mDA4EAA6371C07A5C059EF6BF9BB06BC8044302FD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTurnBasedMatch__ctor_mEF33063B321A44B2C64AF812CBA332018518DD13 (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose_m630CF89F95573A8607FCA54D8E725A27B3EE6952 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchInboxUIResponse__ctor_m4ED1048D98B3A08880C04C19B30D25AA73BCE45D (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus_mAB1428984F6077A133056738C908CFBD51908B55 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMatchResponse_ResponseStatus_m9306254887B9569323A69CB6A07B8497954C3802 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TurnBasedMatchResponse_RequestSucceeded_mCBEB7ECB1407AF179BF309EF2B0ECF8682D28618 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch_m6F5F87A61E17EF45211383464D2C31AF785D2161 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose_mD5956B47C7834DA407FB7AE24A3FE57D4277993D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchResponse__ctor_mE8A7950FE7521BAAC79800FA6AD65284FC9722C7 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose_m4F8C3595F0BDE0E26320A50F14846DC74C438D71 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus_mA8933F85D559A90C3130727495413A5A99C5866E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length_mB1BE1360919FAA94C6BC3A272623A8DCADA23786 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC (uintptr_t* __this, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length_m8F486ABCFC592F69DB44259133F335975A067196 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void System.Func`2<System.UIntPtr,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641 (Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m28688D2F4309F62C35F89C20F44280CA528F8DA5_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<T> GooglePlayGames.Native.PInvoke.PInvokeUtilities::ToEnumerable<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>(System.UIntPtr,System.Func`2<System.UIntPtr,T>)
inline RuntimeObject* PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347 (uintptr_t ___size0, Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 * ___getElement1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (uintptr_t, Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 *, const RuntimeMethod*))PInvokeUtilities_ToEnumerable_TisRuntimeObject_m53C05F2465B8AB5C7D58AC5FDD6FB30F58C25F80_gshared)(___size0, ___getElement1, method);
}
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length_m24671A0A119CBD59671CDEB066E9FD105183F3FB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length_m80B0A6D7CD2EF8829F68CF2A384AD25A45F182C8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchesResponse__ctor_mECEABDE58D55F392281774FF5AC126F88E40BFF2 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement_m187372E854AFC6E1E1C5274EE755E369A919344C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement_mE7A7A56993E9D3584B83BA05A211551C839452C1 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement_mB9B04DDB8F7A69FC83832DC30C9B3285F7670B19 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, const RuntimeMethod* method);
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement_m28BD5E7ADDF0DB46E9999391BBA70894D8C374B0 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31905D7BBDAF533E5723A8EE990237C7C4DE1E10 (U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 * __this, const RuntimeMethod* method);
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMatchConfig::TurnBasedMatchConfig_PlayerIdsToInvite_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t TurnBasedMatchConfig_TurnBasedMatchConfig_PlayerIdsToInvite_GetElement_mEB96ED24D46DCF3983E911694E754F2C0A391D38 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___self0, uintptr_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_arg2, uintptr_t ___out_size3, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void boss::shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void boss_shoot_m31D807C49CD55E9BDAFB1FC949E6DB8A07433E93 (boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1DA66A5CA4C4BC4C1EFD3EEC25CF22E5C72B460 (U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.PInvoke.NativeEvent::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeEvent__ctor_mAA555A0FB53C3B3AF7687064A12524BCFD8BBB0C (NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE * __this, intptr_t ___selfPointer0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m72878B0CA137B81ACEFFBA4DBA0EF92B36D8B16A (U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.Native.PInvoke.MultiplayerParticipant::Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultiplayerParticipant_Id_m65FFD8416E70F6E7A4D11974B7F5B1AA26A55D8F (MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * __this, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.PInvoke.MultiplayerParticipant::AsParticipant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * MultiplayerParticipant_AsParticipant_m5C96E5555DA9D523AD0BA11363557B23770D7FE4 (MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::get_ParticipantId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Participant_get_ParticipantId_m3D2815850CE5CB039AC535389DC7C9C012C88CBB_inline (Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8BE70155771D6D5599B823BE271816DBC69B4947 (U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::get_IsConnectedToRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Participant_get_IsConnectedToRoom_mF8600F5623D997A3E833A3E7142D55A7B6CF8722_inline (Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD649656BAD9522AE4E4414EF3F41F58044D12D2 (U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7531B2CA89B7A7ED3BC5011B77CEFA79DB350AA0 (U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_m399389E9C3A53CFCDADE12F7508753908151A0FD (U3CU3Ec__DisplayClass57_0_t8EC6588F46B4E62CA299029206A17099CEC3B936 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass57_0::<LoadAchievementDescriptions>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CLoadAchievementDescriptionsU3Eb__0_m407FE2B48C68CEF85A0675EA112D7F195741C936 (U3CU3Ec__DisplayClass57_0_t8EC6588F46B4E62CA299029206A17099CEC3B936 * __this, AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievementDescription[] data = new IAchievementDescription[ach.Length];
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_1 = (IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)(IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)SZArrayNew(IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC * L_8 = (PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC *)il2cpp_codegen_object_new(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m1AADF536FEBBA8A0950FED687ED4566391355A95(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_12 = __this->get_callback_0();
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F(L_12, L_13, /*hidden argument*/Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m1EF7AF09AB73A21230B20E74AC594E78FDB01BCA (U3CU3Ec__DisplayClass58_0_tB3878D2A05C966C75A3D062559D885EFD5117EEC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass58_0::<LoadAchievements>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CLoadAchievementsU3Eb__0_mF560F6593CEA53DA623441F7D64C36B9260801EB (U3CU3Ec__DisplayClass58_0_tB3878D2A05C966C75A3D062559D885EFD5117EEC * __this, AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievement[] data = new IAchievement[ach.Length];
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_1 = (IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)(IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)SZArrayNew(IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tC89C0EEDA1DACDB119E2351AABC29F801FD6B6C0* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_t3568D5274558223323FAE6B5FB075B5580920F3A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC * L_8 = (PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC *)il2cpp_codegen_object_new(PlayGamesAchievement_t0AE5BC41100AA8C189F877EA752DB6160EC441DC_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m1AADF536FEBBA8A0950FED687ED4566391355A95(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_12 = __this->get_callback_0();
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3(L_12, L_13, /*hidden argument*/Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m99B9D987E822F78C0B1A892B6BEA8E74C7405CB4 (U3CU3Ec__DisplayClass62_0_t38DEF1F8414088FA34E6319B2F34EAAA5E6AC87E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass62_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CLoadScoresU3Eb__0_m39D42E67DFCAE9AC7141D1D272ED68B699E62722 (U3CU3Ec__DisplayClass62_0_t38DEF1F8414088FA34E6319B2F34EAAA5E6AC87E * __this, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => callback(scoreData.Scores));
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_0 = __this->get_callback_0();
		LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * L_1 = ___scoreData0;
		NullCheck(L_1);
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_2;
		L_2 = LeaderboardScoreData_get_Scores_m0A69C71CC01A46E9E4B476A77A4B8B1785189F3D(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD(L_0, L_2, /*hidden argument*/Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_mFB6EC2EBD27B11EC52CAC71F1C8548EB155E5FDA (U3CU3Ec__DisplayClass74_0_tB7A3C517C3866A1DFABD7B32D2E462F7650AEC85 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3CLoadScoresU3Eb__0_m7837CCD7A2073137E47F59470BEF58C794C3E6B3 (U3CU3Ec__DisplayClass74_0_tB7A3C517C3866A1DFABD7B32D2E462F7650AEC85 * __this, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => HandleLoadingScores(
		//     (PlayGamesLeaderboard)board, scoreData, callback));
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_board_1();
		LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * L_2 = ___scoreData0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_m69FF25A7548F8E0E564F1DB56E3AB9B3BFB8AE45(L_0, ((PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B *)CastclassClass((RuntimeObject*)L_1, PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B_il2cpp_TypeInfo_var)), L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_m9FCE631ED80734EE475C7A7B54ED288C3FA9E349 (U3CU3Ec__DisplayClass77_0_tACB5A502656AC8C112D41B8B91F0A7508F4058C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0::<HandleLoadingScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0_U3CHandleLoadingScoresU3Eb__0_m5442B179DE1F962CD0C1B88EB4BCB8F64C00D77D (U3CU3Ec__DisplayClass77_0_tACB5A502656AC8C112D41B8B91F0A7508F4058C1 * __this, LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * ___nextScoreData0, const RuntimeMethod* method)
{
	{
		// HandleLoadingScores(board, nextScoreData, callback));
		PlayGamesPlatform_t37CF2DD1D3AE9874E13AF34B1DFC4429A7BD975F * L_0 = __this->get_U3CU3E4__this_0();
		PlayGamesLeaderboard_t63BA8C32B80F0D26A20C958337DBE4AB3FF4103B * L_1 = __this->get_board_1();
		LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A * L_2 = ___nextScoreData0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_m69FF25A7548F8E0E564F1DB56E3AB9B3BFB8AE45(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__19__ctor_m83D27F28DD9C797B0342AE785BB87EAF7ABA725C (U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__19_System_IDisposable_Dispose_m69DF8B0872F7D5841575323E4BB09862EBC68EEC (U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__19_MoveNext_mFCB00EDEAB475421829D64AC96790F1E1A3430B9 (U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!string.IsNullOrEmpty(AvatarURL))
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00c8;
		}
	}
	{
		// UnityWebRequest www = UnityWebRequestTexture.GetTexture(AvatarURL);
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline(L_7, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9;
		L_9 = UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37(L_8, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_9);
		// www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_10);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_11;
		L_11 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_10, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_004d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0064:
	{
		// while (!www.isDone)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_12);
		bool L_13;
		L_13 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// if (www.error == null)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0091;
		}
	}
	{
		// this.mImage = DownloadHandlerTexture.GetContent(www);
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_16 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CwwwU3E5__2_3();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18;
		L_18 = DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_mImage_4(L_18);
		// }
		goto IL_00b6;
	}

IL_0091:
	{
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_19 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20;
		L_20 = Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE(/*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_mImage_4(L_20);
		// Debug.Log("Error downloading image: " + www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_21 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// mImageLoading = false;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_24 = V_1;
		NullCheck(L_24);
		il2cpp_codegen_memory_barrier();
		L_24->set_mImageLoading_3(0);
		// }
		__this->set_U3CwwwU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		goto IL_00e6;
	}

IL_00c8:
	{
		// Debug.Log("No URL found.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97, /*hidden argument*/NULL);
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_25 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26;
		L_26 = Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE(/*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_mImage_4(L_26);
		// mImageLoading = false;
		PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * L_27 = V_1;
		NullCheck(L_27);
		il2cpp_codegen_memory_barrier();
		L_27->set_mImageLoading_3(0);
	}

IL_00e6:
	{
		// }
		return (bool)0;
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82FE1406F389DD300EC1DE66E054B3CFB7A9EB37 (U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_m3FD30771F93B411B70B624051AA42B7B86D75FA8 (U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_m3FD30771F93B411B70B624051AA42B7B86D75FA8_RuntimeMethod_var)));
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__19_System_Collections_IEnumerator_get_Current_m4B84A2930F0FF8A661CB4B1BFB091F3144AE3346 (U3CLoadImageU3Ed__19_t6846B67FBBEB1897CB69538BB34A6EE5F2290E27 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689 (FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchCallback__ctor_m00F808D2BD6A083EC1F21D0F4268ABFE1A6EA117 (FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchCallback_Invoke_m092BE2AA40A9C61DE209A847294864FA8A8C4A98 (FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchCallback_BeginInvoke_mE6A2D6980CD60B58C7F19F2502C6795E646782A8 (FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchCallback_EndInvoke_m71AB8005B21DB3C3D37D508A6989A1678722B425 (FetchCallback_tDA8A5AD257D211E11D71436D7FEBF5B74364C689 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15 (FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchListCallback__ctor_mFD4D0B953B94B27D29839C686470D0544BF291D1 (FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchListCallback_Invoke_m855A71744F5A967545C30FD7D86BFEB7E9FC121A (FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchListCallback_BeginInvoke_m1E122FE2461E3D36D6A79974EFCCDF4445894C9C (FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchListCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchListCallback_EndInvoke_mAAE7B46992CE2966E8A93BA3C2D8CFBE212DDEEC (FetchListCallback_t1DF0022C791F2DBC6A021D32643B7B7717A03F15 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691 (FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchSelfCallback__ctor_m4263553846583C81D89EF1EBCA7A316B02D15266 (FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchSelfCallback_Invoke_mDDEF5D423AF397C10C4C949DB9FA8202EC511DA4 (FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchSelfCallback_BeginInvoke_m6264DFDEADF9F066414E05032F4DB7E2A55D5FD0 (FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.PlayerManager/FetchSelfCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchSelfCallback_EndInvoke_m8BE288F7F330229B4F3D2E05B79C8DA295399BB5 (FetchSelfCallback_t3C0659079BE8567E8F64E56FC8FA0610D459F691 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m7EE364E8D6D7F4192D9DC118E14896600D613A50 (U3CU3Ec__DisplayClass4_0_tC2D6FD25DCBDC8B95F92E416521410BF75E5020B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass4_0::<FetchList>b__0(GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CFetchListU3Eb__0_m6829E05B2FF22B4B2CEE3A50600EE5C2A1B2494B (U3CU3Ec__DisplayClass4_0_tC2D6FD25DCBDC8B95F92E416521410BF75E5020B * __this, FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * ___rsp0, const RuntimeMethod* method)
{
	{
		// (rsp) => HandleFetchResponse(coll, rsp),
		PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * L_0 = __this->get_U3CU3E4__this_0();
		FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7 * L_1 = __this->get_coll_1();
		FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * L_2 = ___rsp0;
		NullCheck(L_0);
		PlayerManager_HandleFetchResponse_mA67A98F967B80167035AF85B030C3008E05724E4(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m41F326E94F459D1003B175896D42B7A64D44309E (U3CU3Ec__DisplayClass7_0_t7B751E3B9F7B4CC827F72BFA9DF5ED2AF70D3C20 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/<>c__DisplayClass7_0::<FetchFriends>b__0(GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CFetchFriendsU3Eb__0_m83B05A80CE1C17C0B80287F698D8796F946F0F69 (U3CU3Ec__DisplayClass7_0_t7B751E3B9F7B4CC827F72BFA9DF5ED2AF70D3C20 * __this, FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * ___rsp0, const RuntimeMethod* method)
{
	{
		// (rsp) => HandleFetchCollected(rsp, callback),
		PlayerManager_t0627F9A8E62863CD97952E179AF36EFA46D1D25E * L_0 = __this->get_U3CU3E4__this_0();
		FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * L_1 = ___rsp0;
		Action_2_t41314D780C99FC8FB674545B1779785C340CCE10 * L_2 = __this->get_callback_1();
		NullCheck(L_0);
		PlayerManager_HandleFetchCollected_mD5C386E3AA2139B012982CC20B336A59449D5F04(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchListResponse__ctor_m45AFE7AB58DE61FD01099A604AC2EBD5840D93F9 (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal FetchListResponse(IntPtr selfPointer) : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchListResponse_CallDispose_m2CFF28F11405D74D7A2CA452C21CDEBB4B6294A5 (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.PlayerManager_FetchListResponse_Dispose(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		PlayerManager_PlayerManager_FetchListResponse_Dispose_mE05A616789414D75803521D84EE7314451E497E5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchListResponse_Status_mC4369F80D9D5C93C1A60FF4229D5EEA767C99D56 (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, const RuntimeMethod* method)
{
	{
		// return C.PlayerManager_FetchListResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerManager_PlayerManager_FetchListResponse_GetStatus_m5F5B8D3F6A1BDC8A6E369F59BFE7877C6125F087(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<GooglePlayGames.Native.PInvoke.NativePlayer> GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchListResponse_GetEnumerator_mFC69E103ACABCB3FFA12C430B4DD48597353F9AD (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchListResponse_U3CGetEnumeratorU3Eb__3_0_m97833EC87544E79137D1E04E2C56FC0C190DB83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBBC92D761E90F49EF079B131B7436B48F5165E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_ToEnumerator_TisNativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_m71D6F5A03EB5A9906B6E09F4DE2D07894163E1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PInvokeUtilities.ToEnumerator<NativePlayer>(Length(),
		// (index) => GetElement(index));
		uintptr_t L_0;
		L_0 = FetchListResponse_Length_mA66026014E4ACD1FF30ADFF220F2A34780E9C5AE(__this, /*hidden argument*/NULL);
		Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F * L_1 = (Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F *)il2cpp_codegen_object_new(Func_2_t23D5914D158C9145EC2FE21275D3E8FA0AFFA64F_il2cpp_TypeInfo_var);
		Func_2__ctor_mBBC92D761E90F49EF079B131B7436B48F5165E67(L_1, __this, (intptr_t)((intptr_t)FetchListResponse_U3CGetEnumeratorU3Eb__3_0_m97833EC87544E79137D1E04E2C56FC0C190DB83A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBBC92D761E90F49EF079B131B7436B48F5165E67_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = PInvokeUtilities_ToEnumerator_TisNativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_m71D6F5A03EB5A9906B6E09F4DE2D07894163E1B7(L_0, L_1, /*hidden argument*/PInvokeUtilities_ToEnumerator_TisNativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_m71D6F5A03EB5A9906B6E09F4DE2D07894163E1B7_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.IEnumerator GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchListResponse_System_Collections_IEnumerable_GetEnumerator_mE430585C4C8E921440DE15D18937535B2540F0CC (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = FetchListResponse_GetEnumerator_mFC69E103ACABCB3FFA12C430B4DD48597353F9AD(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UIntPtr GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t FetchListResponse_Length_mA66026014E4ACD1FF30ADFF220F2A34780E9C5AE (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, const RuntimeMethod* method)
{
	{
		// return C.PlayerManager_FetchListResponse_GetData_Length(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = PlayerManager_PlayerManager_FetchListResponse_GetData_Length_m5D5B7F23E61553F3BFA64E894B56DC79FA82B139(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.Native.PInvoke.NativePlayer GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::GetElement(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * FetchListResponse_GetElement_m06F73DBDA460199CF318E3A8C50910F60003FEE6 (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (index.ToUInt64() >= Length().ToUInt64())
		uint64_t L_0;
		L_0 = UIntPtr_ToUInt64_mF1EC8AE1580069E87844A57EF46876AA453ADFC8((uintptr_t*)(&___index0), /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = FetchListResponse_Length_mA66026014E4ACD1FF30ADFF220F2A34780E9C5AE(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		uint64_t L_2;
		L_2 = UIntPtr_ToUInt64_mF1EC8AE1580069E87844A57EF46876AA453ADFC8((uintptr_t*)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint64_t)L_0) >= ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FetchListResponse_GetElement_m06F73DBDA460199CF318E3A8C50910F60003FEE6_RuntimeMethod_var)));
	}

IL_001d:
	{
		// return new NativePlayer(
		//     C.PlayerManager_FetchListResponse_GetData_GetElement(SelfPtr(), index));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		L_4 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_5 = ___index0;
		intptr_t L_6;
		L_6 = PlayerManager_PlayerManager_FetchListResponse_GetData_GetElement_mAFC5397D8E061F5E8064CFD96DD42C458A04AADF(L_4, L_5, /*hidden argument*/NULL);
		NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * L_7 = (NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC *)il2cpp_codegen_object_new(NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_il2cpp_TypeInfo_var);
		NativePlayer__ctor_mB0EB660855CDB646D0B5EFAA24275718046EE482(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * FetchListResponse_FromPointer_m716A61C6A2FD8113A885F112C186301CD471BEC4 (intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PInvokeUtilities.IsNull(selfPointer))
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77((intptr_t)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E *)NULL;
	}

IL_000a:
	{
		// return new FetchListResponse(selfPointer);
		intptr_t L_2 = ___selfPointer0;
		FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * L_3 = (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E *)il2cpp_codegen_object_new(FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E_il2cpp_TypeInfo_var);
		FetchListResponse__ctor_m45AFE7AB58DE61FD01099A604AC2EBD5840D93F9(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.Native.PInvoke.NativePlayer GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse::<GetEnumerator>b__3_0(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * FetchListResponse_U3CGetEnumeratorU3Eb__3_0_m97833EC87544E79137D1E04E2C56FC0C190DB83A (FetchListResponse_t7C8ADF2B171F73C11E8CB5C8ED313B63C231AD5E * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	{
		// (index) => GetElement(index));
		uintptr_t L_0 = ___index0;
		NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * L_1;
		L_1 = FetchListResponse_GetElement_m06F73DBDA460199CF318E3A8C50910F60003FEE6(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchResponse__ctor_m29B934B9B66B7D97B4C543E8B2712484BB2D434D (FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal FetchResponse(IntPtr selfPointer) : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchResponse_CallDispose_m2C6F22E26D95D070A6621920FE049EDE2D762042 (FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.PlayerManager_FetchResponse_Dispose(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		PlayerManager_PlayerManager_FetchResponse_Dispose_mEE8BDE6E09E5B730BA63DC82F03700D7C031CED2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.NativePlayer GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse::GetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * FetchResponse_GetPlayer_m1C939CD56AC7BF43A38501598A86EA96B6C3261A (FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NativePlayer(
		//     C.PlayerManager_FetchResponse_GetData(SelfPtr())
		// );
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_1;
		L_1 = PlayerManager_PlayerManager_FetchResponse_GetData_m6E423E6863A0F66018CB2D564040FE4254D730D2(L_0, /*hidden argument*/NULL);
		NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * L_2 = (NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC *)il2cpp_codegen_object_new(NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_il2cpp_TypeInfo_var);
		NativePlayer__ctor_mB0EB660855CDB646D0B5EFAA24275718046EE482(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse::Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchResponse_Status_mF39736EA3D4B2E8E46B30C9B2D5E31597621EE1A (FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * __this, const RuntimeMethod* method)
{
	{
		// return C.PlayerManager_FetchResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerManager_PlayerManager_FetchResponse_GetStatus_m20CD2650AB196AE9892D48E8AF85586814403CB8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * FetchResponse_FromPointer_m0DDA943509474D0AF5BE3582281742A46DD34DB1 (intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PInvokeUtilities.IsNull(selfPointer))
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77((intptr_t)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E *)NULL;
	}

IL_000a:
	{
		// return new FetchResponse(selfPointer);
		intptr_t L_2 = ___selfPointer0;
		FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E * L_3 = (FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E *)il2cpp_codegen_object_new(FetchResponse_t9B626D2C477C7EADBBB8641BEA25575D77850D8E_il2cpp_TypeInfo_var);
		FetchResponse__ctor_m29B934B9B66B7D97B4C543E8B2712484BB2D434D(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchResponseCollector__ctor_mEFCAF7FFB2CD14143DD848CE4A57043F64BC0D05 (FetchResponseCollector_t8153D30DFB20D4E83E6F9ED0BC24CABC6E6125D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCD8ED4B409677A1E15F1040A2F31796F3CBB454A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE7A39495D928B10103D7D9899B151155EE1915FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal List<NativePlayer> results = new List<NativePlayer>();
		List_1_tE7A39495D928B10103D7D9899B151155EE1915FC * L_0 = (List_1_tE7A39495D928B10103D7D9899B151155EE1915FC *)il2cpp_codegen_object_new(List_1_tE7A39495D928B10103D7D9899B151155EE1915FC_il2cpp_TypeInfo_var);
		List_1__ctor_mCD8ED4B409677A1E15F1040A2F31796F3CBB454A(L_0, /*hidden argument*/List_1__ctor_mCD8ED4B409677A1E15F1040A2F31796F3CBB454A_RuntimeMethod_var);
		__this->set_results_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchSelfResponse__ctor_m618D5727B70C1CC1136CCA37B480664A2866BA42 (FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse::Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchSelfResponse_Status_m4E9E0BEFD46D5026E690DAB71094D11A5CAD6B86 (FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A * __this, const RuntimeMethod* method)
{
	{
		// return C.PlayerManager_FetchSelfResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerManager_PlayerManager_FetchSelfResponse_GetStatus_m666EB5A16D96DD08B2E9165D257B6EBAFD2A2C38(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.Native.PInvoke.NativePlayer GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse::Self()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * FetchSelfResponse_Self_m3434FAAFEC27C8F8765DBE2890CE53CD5B73E90A (FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NativePlayer(C.PlayerManager_FetchSelfResponse_GetData(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_1;
		L_1 = PlayerManager_PlayerManager_FetchSelfResponse_GetData_m8B82CA14AB5151C18BC1296548FE675DF6F5E133(L_0, /*hidden argument*/NULL);
		NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC * L_2 = (NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC *)il2cpp_codegen_object_new(NativePlayer_t146AA80655A4A957AF8C0F0F9C5E754B05693AEC_il2cpp_TypeInfo_var);
		NativePlayer__ctor_mB0EB660855CDB646D0B5EFAA24275718046EE482(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchSelfResponse_CallDispose_m17B0050BDA5FB40058D384AC1C56F5DB0B06E520 (FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.PlayerManager_FetchSelfResponse_Dispose(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		PlayerManager_PlayerManager_FetchSelfResponse_Dispose_mA28CAE6BC4F442B63BC1F3248A38B5CB64125CF2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A * FetchSelfResponse_FromPointer_m25A1ABA01A345F8240A2F606C2D154FD302E5257 (intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PInvokeUtilities.IsNull(selfPointer))
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77((intptr_t)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A *)NULL;
	}

IL_000a:
	{
		// return new FetchSelfResponse(selfPointer);
		intptr_t L_2 = ___selfPointer0;
		FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A * L_3 = (FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A *)il2cpp_codegen_object_new(FetchSelfResponse_t223B6E6095525C6FE09D0C82310324E3E2F2541A_il2cpp_TypeInfo_var);
		FetchSelfResponse__ctor_m618D5727B70C1CC1136CCA37B480664A2866BA42(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m38C81AF0E03B825EE15312EA4E6AEB7776093086 (U3CU3Ec__DisplayClass2_0_t1510878C6AE9B68DCBAFABD2EE7104D3F8C3C819 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UIntPtr GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse/<>c__DisplayClass2_0::<PlayerIdAtIndex>b__0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass2_0_U3CPlayerIdAtIndexU3Eb__0_m85F246F966B4E0EFDFDD84FE7750644C5C61DF86 (U3CU3Ec__DisplayClass2_0_t1510878C6AE9B68DCBAFABD2EE7104D3F8C3C819 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_string0, uintptr_t ___size1, const RuntimeMethod* method)
{
	{
		// (out_string, size) => C.TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement(
		//     SelfPtr(), index, out_string, size));
		PlayerSelectUIResponse_t6251E72736AEC4DA7D0FCA139A204E3923753910 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(L_0, /*hidden argument*/NULL);
		uintptr_t L_2 = __this->get_index_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___out_string0;
		uintptr_t L_4 = ___size1;
		uintptr_t L_5;
		L_5 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement_m078CF546026BF15B8CE889ED235039804CD743C2(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F (OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, uintptr_t ___arg33, bool ___arg44, intptr_t ___arg55, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t, uintptr_t, int8_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11, ___arg22, ___arg33, static_cast<int8_t>(___arg44), ___arg55);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDataReceivedCallback__ctor_m58C4E9ECA66FD9F682B793DD93D010D2CDD2EE21 (OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.UIntPtr,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDataReceivedCallback_Invoke_m071695A39EF1AD3F9C330C55041A57AC2A304473 (OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, uintptr_t ___arg33, bool ___arg44, intptr_t ___arg55, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, uintptr_t, bool, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, uintptr_t, bool, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< intptr_t, intptr_t, intptr_t, uintptr_t, bool, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55);
					else
						GenericVirtActionInvoker6< intptr_t, intptr_t, intptr_t, uintptr_t, bool, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< intptr_t, intptr_t, intptr_t, uintptr_t, bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55);
					else
						VirtActionInvoker6< intptr_t, intptr_t, intptr_t, uintptr_t, bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, uintptr_t, bool, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.UIntPtr,System.Boolean,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDataReceivedCallback_BeginInvoke_mAD0C28A789C06162C038FC843E73EABEA9F095DD (OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, uintptr_t ___arg33, bool ___arg44, intptr_t ___arg55, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg22);
	__d_args[3] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___arg33);
	__d_args[4] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg44);
	__d_args[5] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg55);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnDataReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDataReceivedCallback_EndInvoke_mB46F7C7F8893E453E142802473383998F09D55B7 (OnDataReceivedCallback_t2F99A0207C4A5BDBBAE76D80E9B7ECA2090F935F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004 (OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004 * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11, ___arg22);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnP2PConnectedCallback__ctor_mC292F533B5E813316EE7CD46DD9CDDBBED2C45FB (OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnP2PConnectedCallback_Invoke_mD0F88F3F8DA16BEECB492F1B5A616438D7E1BACF (OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004 * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnP2PConnectedCallback_BeginInvoke_mACB372477889D86EB28931A0AAD530782EC06083 (OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004 * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PConnectedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnP2PConnectedCallback_EndInvoke_m1FA29CBDDBFE5C7B6BB55165FCB444DF7E90DF49 (OnP2PConnectedCallback_t2B545A8FE3659FEDBB3338FA8868138D11E07004 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511 (OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511 * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11, ___arg22);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnP2PDisconnectedCallback__ctor_m6A03313455AD20105053907C2A896F5E720766CC (OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnP2PDisconnectedCallback_Invoke_m1C845A74C52FEBA19EEF3BC8FD3C21DF6A209033 (OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511 * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnP2PDisconnectedCallback_BeginInvoke_m3A722B3E03BF9C8FB8778F8AEC58FFF12003F521 (OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511 * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnP2PDisconnectedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnP2PDisconnectedCallback_EndInvoke_m14B0F1AC0023F4EDF466CD7C5AFCCE85810140D3 (OnP2PDisconnectedCallback_t2E400BB91DBC4559A15D260032AC2DEDD36FD511 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B (OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11, ___arg22);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnParticipantStatusChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnParticipantStatusChangedCallback__ctor_m2E3B88A2CD415ACCF4B483C4660AD707C60EF94D (OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnParticipantStatusChangedCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnParticipantStatusChangedCallback_Invoke_m505886DC0ADA063EE892901C4C29BA657F460033 (OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnParticipantStatusChangedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnParticipantStatusChangedCallback_BeginInvoke_mB2C5080C725F95E393D18E46A3AA96C5C75F1DD7 (OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B * __this, intptr_t ___arg00, intptr_t ___arg11, intptr_t ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnParticipantStatusChangedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnParticipantStatusChangedCallback_EndInvoke_m18E3D24DCE8612E3E25185069F5F3B20F7E2DD3C (OnParticipantStatusChangedCallback_t9603635CC54200B79EDFA340888202A480FF937B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C (OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomConnectedSetChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRoomConnectedSetChangedCallback__ctor_m9B8B7B381F8ADEEA5D1E3A840AAC662F7F92C32D (OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomConnectedSetChangedCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRoomConnectedSetChangedCallback_Invoke_mB2468E9BBE6D4E141BA8FEB3B214BAEBDB7C1752 (OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomConnectedSetChangedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRoomConnectedSetChangedCallback_BeginInvoke_m650AC2B29F0501D6324A568DFB167E2A2580EFC8 (OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomConnectedSetChangedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRoomConnectedSetChangedCallback_EndInvoke_mA50615877BFACED16E6981A6554204FD747131F7 (OnRoomConnectedSetChangedCallback_tAB7C98914224E701D4B52CFF03D073EBEB0A010C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417 (OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomStatusChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRoomStatusChangedCallback__ctor_mE59DEB3754A8CD905C700D1AB20BEA989DCB05EF (OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomStatusChangedCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRoomStatusChangedCallback_Invoke_mF56A99246C260E472FBEB0635FF5B4B864773EF4 (OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomStatusChangedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRoomStatusChangedCallback_BeginInvoke_m23B72488DD891407C39C40D3A2198DF73B8BA944 (OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeEventListenerHelper/OnRoomStatusChangedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRoomStatusChangedCallback_EndInvoke_mC5C78C43BDE6C5F857C6057B5D2DAB15DCBBD98B (OnRoomStatusChangedCallback_tD6811B500EB972317DCF955003BE73BB67FCB417 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m93853D52116899543FC5016295DA4DF5C9C02DB8 (U3CU3Ec__DisplayClass15_0_tCF99A68E32C84B80F20D3B890CDF05397716EBFF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper/<>c__DisplayClass15_0::<ToCallbackPointer>b__0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CToCallbackPointerU3Eb__0_mCA02AB952253A66AAABFD2C494441C3FB47FEC3B (U3CU3Ec__DisplayClass15_0_tCF99A68E32C84B80F20D3B890CDF05397716EBFF * __this, intptr_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m5AEEF38D45D3E86E0256A11F747164DD7D2E9775_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * V_0 = NULL;
	{
		// NativeRealTimeRoom converted = NativeRealTimeRoom.FromPointer(result);
		intptr_t L_0 = ___result0;
		NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * L_1;
		L_1 = NativeRealTimeRoom_FromPointer_m2553B29926A39935E6A110F56D764895DE3B3B87((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (callback != null)
		Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD * L_2 = __this->get_callback_0();
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// callback(converted);
		Action_1_tD88B236684BED0B2FCFA7FCF2133A95EB35A5AAD * L_3 = __this->get_callback_0();
		NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_m5AEEF38D45D3E86E0256A11F747164DD7D2E9775(L_3, L_4, /*hidden argument*/Action_1_Invoke_m5AEEF38D45D3E86E0256A11F747164DD7D2E9775_RuntimeMethod_var);
		// }
		return;
	}

IL_001c:
	{
		// if (converted != null)
		NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// converted.Dispose();
		NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * L_6 = V_0;
		NullCheck(L_6);
		BaseReferenceHolder_Dispose_m05EDAA7CD97ECCBE88B5D254172E635690C418D3(L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873 (FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchInvitationsCallback__ctor_m34202E70CC94F0C2884BADE55FC7BA9E9C1D94DD (FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchInvitationsCallback_Invoke_m54ECF0DDCADACD1A36E07795B2279A6EAACAF901 (FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchInvitationsCallback_BeginInvoke_mF78CCF15FB1D9ABCEFF8FE4AD5491FAC62E29E74 (FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchInvitationsCallback_EndInvoke_m371787701D750812DA6C2926CFF9F7B70E62E270 (FetchInvitationsCallback_t830AF7C2E84C2EC15855071266B8C973A8445873 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A (LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A * __this, int32_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveRoomCallback__ctor_m8F2807E55B7F332516D68D21A6DB55C46F5CC499 (LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveRoomCallback_Invoke_mCAED7B4C649FD32973A19DB9D578E0C40397B119 (LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A * __this, int32_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeaveRoomCallback_BeginInvoke_mE91A23B788167B0394C918C7EA2072A223346AD6 (LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A * __this, int32_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStatus_tF7DCAAC973ED0FA21A52681BC7311D3F94520963_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ResponseStatus_tF7DCAAC973ED0FA21A52681BC7311D3F94520963_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveRoomCallback_EndInvoke_mDFE31AD8CD6BE6D758C149DCAF38DB683423099B (LeaveRoomCallback_tEDA5E4F54014C0F52DA42C788D6A90648EC8178A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD (PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSelectUICallback__ctor_mF2C5B06A87ADCCEA865D900C932C02423B4FECC7 (PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSelectUICallback_Invoke_mC43662682076359F418DC418FB07C0FF663BD855 (PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerSelectUICallback_BeginInvoke_m265352A05E114F817D1B5DCBCE9B8416DE26A514 (PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSelectUICallback_EndInvoke_m240B4A3399217761FA9319EA597119495378CDFD (PlayerSelectUICallback_t011D3D6E954FC5CBFE2CA481899335633DF965CD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00 (RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeRoomCallback__ctor_m00B865019CF7072BB9C3767A4BD18FFB8579BD0A (RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeRoomCallback_Invoke_mF4082BCAF2EEF7EFA04E6ED7598DADF3B1E7123E (RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealTimeRoomCallback_BeginInvoke_m4C1EB33670653B654F328E67C54A9144A26F6B4C (RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeRoomCallback_EndInvoke_mDBAF564B829F7D52161189C1EC6D370D7784C81C (RealTimeRoomCallback_tF6F518D1F4ED527E861D76243328862B8927EA00 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6 (RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInboxUICallback__ctor_m218AD9FCE69A82FD83FFD429E870551D63B86331 (RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInboxUICallback_Invoke_mF701D69EB179A1B7DD9E82E29A7B93C17326F9B0 (RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RoomInboxUICallback_BeginInvoke_m7ECBD73724BFB17B7B29DF0C566EF83465FE6AD5 (RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInboxUICallback_EndInvoke_m7C500DC48BED9B806671595872512CE54CC0413C (RoomInboxUICallback_tB8ED0F60C174B7CAF6B1F0102C907A7E6FC410D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D (SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D * __this, int32_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendReliableMessageCallback__ctor_m3279AFB4E541C38DCD0AC95ED80006E0C2C8342A (SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendReliableMessageCallback_Invoke_mCFC21942A31A8BCC415546942CB0C89EAF7DA9CF (SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D * __this, int32_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SendReliableMessageCallback_BeginInvoke_mC177D412537FC117B79A4CCB4FB44627C85BB386 (SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D * __this, int32_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerStatus_tDE792785955C8660103E4CC6558337F31A30E726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(MultiplayerStatus_tDE792785955C8660103E4CC6558337F31A30E726_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendReliableMessageCallback_EndInvoke_m1F408B26425228F79A3472CFB537E7FFE5A6DF39 (SendReliableMessageCallback_t518A95C0DA8542916A5ACBA9DB1F3F875FFC743D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19 (WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitingRoomUICallback__ctor_m757A97983D43AA4633B4E75844B9C1E025F121CA (WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitingRoomUICallback_Invoke_m0B74F94B0763700F0E8ED7D5956D6EEB5451EF01 (WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitingRoomUICallback_BeginInvoke_mE4F7DBFBE84ED645D9EB0BB61DA648E9433628AF (WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitingRoomUICallback_EndInvoke_m9E0C1DB463E690EBB0DB00056B2F5184942B5571 (WaitingRoomUICallback_t5E65D916BEBB22B541DD4D6F988A920A4EB92B19 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7D535E8F14A98DB3CC201B7583A7312C889BC7BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 * L_0 = (U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 *)il2cpp_codegen_object_new(U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m78DC35646844B5EE18309AFACD20BA65C8AEA309(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m78DC35646844B5EE18309AFACD20BA65C8AEA309 (U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr GooglePlayGames.Native.PInvoke.RealtimeManager/<>c::<SendUnreliableMessageToSpecificParticipants>b__19_0(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t U3CU3Ec_U3CSendUnreliableMessageToSpecificParticipantsU3Eb__19_0_m3FF46CFDBF543CE10F1AB1F5E3FD56C0C307F525 (U3CU3Ec_tD24F3E9E876659C9D7712EC1364D3C981A0CB992 * __this, MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * ___r0, const RuntimeMethod* method)
{
	{
		// recipients.Select(r => r.AsPointer()).ToArray(),
		MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * L_0 = ___r0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = BaseReferenceHolder_AsPointer_m4FA02CD1CEB1315996E3881A0B7D80A81B6F8E8D(L_0, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchInvitationsResponse__ctor_m69913FDD2F9FDDAD1453B991F3059E2696C45A98 (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FetchInvitationsResponse_RequestSucceeded_mC2CD40FB13612AF19DA41DC8CC24EBDA5B11AB2B (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, const RuntimeMethod* method)
{
	{
		// return ResponseStatus() > 0;
		int32_t L_0;
		L_0 = FetchInvitationsResponse_ResponseStatus_m2342827E93B2E42918E14F13B8C451DBD2F50A22(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchInvitationsResponse_ResponseStatus_m2342827E93B2E42918E14F13B8C451DBD2F50A22 (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, const RuntimeMethod* method)
{
	{
		// return C.RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetStatus_m575301BC516082271C982811592D4F89A7E09EAB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation> GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::Invitations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchInvitationsResponse_Invitations_m2D5B30191BE12EDF0D6F123A789DC56CDF4B19B2 (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchInvitationsResponse_U3CInvitationsU3Eb__3_0_mC24FA428C842C5D90F534A1F685364DD1B9E4A97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PInvokeUtilities.ToEnumerable(
		//     C.RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length(
		//         SelfPtr()),
		//     index => new MultiplayerInvitation(
		//         C.RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement(
		//             SelfPtr(), index))
		// );
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_Length_mACC72BEA7AB44FD56B65A766DAC4C2622707AD91(L_0, /*hidden argument*/NULL);
		Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 * L_2 = (Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 *)il2cpp_codegen_object_new(Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2_il2cpp_TypeInfo_var);
		Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3(L_2, __this, (intptr_t)((intptr_t)FetchInvitationsResponse_U3CInvitationsU3Eb__3_0_mC24FA428C842C5D90F534A1F685364DD1B9E4A97_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE(L_1, L_2, /*hidden argument*/PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchInvitationsResponse_CallDispose_m23D7C0B3F72FA19A64C6EDF44F0700D5070C993C (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_Dispose_m621CB098585133B5C2AEF76B3971A145085956AB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * FetchInvitationsResponse_FromPointer_mA5F939AC8D70CA5A508B0982E6B0001DE7920B7A (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PInvokeUtilities.IsNull(pointer))
		intptr_t L_0 = ___pointer0;
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77((intptr_t)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 *)NULL;
	}

IL_000a:
	{
		// return new FetchInvitationsResponse(pointer);
		intptr_t L_2 = ___pointer0;
		FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * L_3 = (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 *)il2cpp_codegen_object_new(FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0_il2cpp_TypeInfo_var);
		FetchInvitationsResponse__ctor_m69913FDD2F9FDDAD1453B991F3059E2696C45A98(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse::<Invitations>b__3_0(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F * FetchInvitationsResponse_U3CInvitationsU3Eb__3_0_mC24FA428C842C5D90F534A1F685364DD1B9E4A97 (FetchInvitationsResponse_tA3958F79DE31D877B9AEF33CF98B1D112552E3B0 * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index => new MultiplayerInvitation(
		//     C.RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement(
		//         SelfPtr(), index))
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1 = ___index0;
		intptr_t L_2;
		L_2 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_FetchInvitationsResponse_GetInvitations_GetElement_m2F5861BDD586B3F4AA409E927EB8A685DAE2129E(L_0, L_1, /*hidden argument*/NULL);
		MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F * L_3 = (MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F *)il2cpp_codegen_object_new(MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_il2cpp_TypeInfo_var);
		MultiplayerInvitation__ctor_m640001D0ADB2E2334955EFC2FB2DBE8F4EAA6F13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeRoomResponse__ctor_m73CEDE4FA7EC6BA08C3E566EC3C76EEBA7411A35 (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealTimeRoomResponse_ResponseStatus_m37F78EE3D2370854509D894765E543DA23E71CD9 (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, const RuntimeMethod* method)
{
	{
		// return C.RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetStatus_m06A2055119FA4FD2423D01E7FC6F4300480849C4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealTimeRoomResponse_RequestSucceeded_m4B206E222A74D9CACB22A1878CB1E5A95B9B0DDF (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, const RuntimeMethod* method)
{
	{
		// return ResponseStatus() > 0;
		int32_t L_0;
		L_0 = RealTimeRoomResponse_ResponseStatus_m37F78EE3D2370854509D894765E543DA23E71CD9(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::Room()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * RealTimeRoomResponse_Room_m322CBF60529C7DA6EA52E80F8964C3D623664AFF (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!RequestSucceeded())
		bool L_0;
		L_0 = RealTimeRoomResponse_RequestSucceeded_m4B206E222A74D9CACB22A1878CB1E5A95B9B0DDF(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 *)NULL;
	}

IL_000a:
	{
		// return new NativeRealTimeRoom(
		//     C.RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_GetRoom_m53B1438896AC9B2135DEBC6BB8464D2ACCF971E8(L_1, /*hidden argument*/NULL);
		NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * L_3 = (NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 *)il2cpp_codegen_object_new(NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151_il2cpp_TypeInfo_var);
		NativeRealTimeRoom__ctor_m00CA2A1767C2C039C27B9EE4DDBB77B6643B3687(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealTimeRoomResponse_CallDispose_m17F528BBE9156B9DA7BA4C01FF28E6A0F957C0F9 (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		RealTimeMultiplayerManager_RealTimeMultiplayerManager_RealTimeRoomResponse_Dispose_mEDC250C07FB996380857D99F96F3380BD7353729(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * RealTimeRoomResponse_FromPointer_m75F3560B69F093B60251DC68A9A3C2799FA62C35 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 *)NULL;
	}

IL_0015:
	{
		// return new RealTimeRoomResponse(pointer);
		intptr_t L_3 = ___pointer0;
		RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 * L_4 = (RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4 *)il2cpp_codegen_object_new(RealTimeRoomResponse_tEEE4F1AE53B4B0E9AC8BC2403280FA2B402230E4_il2cpp_TypeInfo_var);
		RealTimeRoomResponse__ctor_m73CEDE4FA7EC6BA08C3E566EC3C76EEBA7411A35(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInboxUIResponse__ctor_mF1619F15F1C5AF368C759A015336CB08AD9AF3C3 (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInboxUIResponse_ResponseStatus_mC70DC58A9E725CD7ABD5390C072B87176431DC1C (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * __this, const RuntimeMethod* method)
{
	{
		// return C.RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetStatus_m99F812FDAF9C0F564F50ABBD473DA126A57A7833(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse::Invitation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F * RoomInboxUIResponse_Invitation_m21DAA62CE736D1B3B947302603AE44EA23403CF5 (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ResponseStatus() != Status.UIStatus.VALID)
		int32_t L_0;
		L_0 = RoomInboxUIResponse_ResponseStatus_mC70DC58A9E725CD7ABD5390C072B87176431DC1C(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F *)NULL;
	}

IL_000b:
	{
		// return new MultiplayerInvitation(
		//     C.RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_GetInvitation_m2DC715A4019B9952B90024932CC6FF3F0C361234(L_1, /*hidden argument*/NULL);
		MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F * L_3 = (MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F *)il2cpp_codegen_object_new(MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_il2cpp_TypeInfo_var);
		MultiplayerInvitation__ctor_m640001D0ADB2E2334955EFC2FB2DBE8F4EAA6F13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInboxUIResponse_CallDispose_m0FB8ECA16FFFB6ABD6BADB2C7F76C0CB8C60A6CE (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		RealTimeMultiplayerManager_RealTimeMultiplayerManager_RoomInboxUIResponse_Dispose_m31D1ABF6DBD50B270CF3C929919056639F806048(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * RoomInboxUIResponse_FromPointer_m6B2110062909A682835BBC159F2426781EDBB1B3 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PInvokeUtilities.IsNull(pointer))
		intptr_t L_0 = ___pointer0;
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77((intptr_t)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 *)NULL;
	}

IL_000a:
	{
		// return new RoomInboxUIResponse(pointer);
		intptr_t L_2 = ___pointer0;
		RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 * L_3 = (RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78 *)il2cpp_codegen_object_new(RoomInboxUIResponse_tD4C6E78209FC2FBBDDEFFC5D273451CC5F290B78_il2cpp_TypeInfo_var);
		RoomInboxUIResponse__ctor_mF1619F15F1C5AF368C759A015336CB08AD9AF3C3(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitingRoomUIResponse__ctor_mB11637C5C2C5451BFEAB313F2177134F48DDC6D0 (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitingRoomUIResponse_ResponseStatus_mA19A865FEEECE2FFD7893061B2D971044D1AD9F8 (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * __this, const RuntimeMethod* method)
{
	{
		// return C.RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetStatus_m77949A4A3EDCA4E41138315B43467BC7DBC798AB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse::Room()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * WaitingRoomUIResponse_Room_mA903DD650597E0D375613E7A949361125574D10E (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ResponseStatus() != Status.UIStatus.VALID)
		int32_t L_0;
		L_0 = WaitingRoomUIResponse_ResponseStatus_mA19A865FEEECE2FFD7893061B2D971044D1AD9F8(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 *)NULL;
	}

IL_000b:
	{
		// return new NativeRealTimeRoom(
		//     C.RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_GetRoom_m1DF9D6ACA535794E258F460BF5BAE60E3D481928(L_1, /*hidden argument*/NULL);
		NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 * L_3 = (NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151 *)il2cpp_codegen_object_new(NativeRealTimeRoom_tC2BF9B43E8CDFF1FBEDF3FE8F84ADAA28983A151_il2cpp_TypeInfo_var);
		NativeRealTimeRoom__ctor_m00CA2A1767C2C039C27B9EE4DDBB77B6643B3687(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitingRoomUIResponse_CallDispose_m964D66B9598C95D10FAA0B8FBF9716E4E24E681D (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		RealTimeMultiplayerManager_RealTimeMultiplayerManager_WaitingRoomUIResponse_Dispose_mEDFD92D9A6DDF4772F38461E11D295746969B6D4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * WaitingRoomUIResponse_FromPointer_mCD0F6E71DFAB28252900C5B3F968A3078B020409 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PInvokeUtilities.IsNull(pointer))
		intptr_t L_0 = ___pointer0;
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77((intptr_t)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 *)NULL;
	}

IL_000a:
	{
		// return new WaitingRoomUIResponse(pointer);
		intptr_t L_2 = ___pointer0;
		WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 * L_3 = (WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983 *)il2cpp_codegen_object_new(WaitingRoomUIResponse_tFC5599E7BD3F571CB331FBF7DD35FF15B2078983_il2cpp_TypeInfo_var);
		WaitingRoomUIResponse__ctor_mB11637C5C2C5451BFEAB313F2177134F48DDC6D0(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke_back(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_pinvoke_cleanup(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com_back(const Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled, Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshal_com_cleanup(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, String_t* ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C(L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_m4919930979DEC18E356BEEB3FCABF45CA6E4619C_RuntimeMethod_var);
		__this->set_mNewDescription_1(L_1);
		// mDescriptionUpdated = true;
		__this->set_mDescriptionUpdated_0((bool)1);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_2 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC_AdjustorThunk (RuntimeObject * __this, String_t* ___description0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedDescription_m1B5E5698D1A3137769C58D2EA75EDFF5D49811FC(_thisAdjusted, ___description0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	{
		// mCoverImageUpdated = true;
		__this->set_mCoverImageUpdated_2((bool)1);
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___newPngCoverImage0;
		__this->set_mNewPngCoverImage_3(L_0);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_1 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m7C48C5B34677D8D70F845C78E2D60CF7D5078C15(_thisAdjusted, ___newPngCoverImage0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9 (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___newPlayedTime0), /*hidden argument*/NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//     "milliseconds are not allowed");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_RuntimeMethod_var)));
	}

IL_001d:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___newPlayedTime0;
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		__this->set_mNewPlayedTime_4(L_3);
		// return this;
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_4 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9_AdjustorThunk (RuntimeObject * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mB1C14EF6BC5B4B5244DB34D9D518CDF013A666F9(_thisAdjusted, ___newPlayedTime0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * __this, const RuntimeMethod* method)
{
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059  L_0 = (*(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *)__this);
		SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_mA17CBE92DAB0E4914C2E090AF00210FF7143CB75((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 * _thisAdjusted = reinterpret_cast<Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 *>(__this + _offset);
	SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3  _returnValue;
	_returnValue = Builder_Build_m5AA41312186A10124FA445AC4AAE4532E82C4BFC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled)
{
	marshaled.___Message_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Message_0());
	marshaled.___MsgType_1 = unmarshaled.get_MsgType_1();
	marshaled.___HelpType_2 = unmarshaled.get_HelpType_2();
}
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke_back(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled)
{
	unmarshaled.set_Message_0(il2cpp_codegen_marshal_string_result(marshaled.___Message_0));
	int32_t unmarshaled_MsgType_temp_1 = 0;
	unmarshaled_MsgType_temp_1 = marshaled.___MsgType_1;
	unmarshaled.set_MsgType_1(unmarshaled_MsgType_temp_1);
	int32_t unmarshaled_HelpType_temp_2 = 0;
	unmarshaled_HelpType_temp_2 = marshaled.___HelpType_2;
	unmarshaled.set_HelpType_2(unmarshaled_HelpType_temp_2);
}
// Conversion method for clean up from marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke_cleanup(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Message_0);
	marshaled.___Message_0 = NULL;
}
// Conversion methods for marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled)
{
	marshaled.___Message_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Message_0());
	marshaled.___MsgType_1 = unmarshaled.get_MsgType_1();
	marshaled.___HelpType_2 = unmarshaled.get_HelpType_2();
}
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com_back(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled)
{
	unmarshaled.set_Message_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Message_0));
	int32_t unmarshaled_MsgType_temp_1 = 0;
	unmarshaled_MsgType_temp_1 = marshaled.___MsgType_1;
	unmarshaled.set_MsgType_1(unmarshaled_MsgType_temp_1);
	int32_t unmarshaled_HelpType_temp_2 = 0;
	unmarshaled_HelpType_temp_2 = marshaled.___HelpType_2;
	unmarshaled.set_HelpType_2(unmarshaled_HelpType_temp_2);
}
// Conversion method for clean up from marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com_cleanup(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Message_0);
	marshaled.___Message_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShareButton/<TakeScreenshotAndShare>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndShareU3Ed__1__ctor_m0AEA80EF5151EAA6C1C5FC0B209FF1CB4A03C3BD (U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ShareButton/<TakeScreenshotAndShare>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndShareU3Ed__1_System_IDisposable_Dispose_m87AB255C2AA6602F5D369BC2D9948BA44FF7FA0F (U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ShareButton/<TakeScreenshotAndShare>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeScreenshotAndShareU3Ed__1_MoveNext_mBFA6C0F535FE94052D34F1396B6E99D319429888 (U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420D942F312515DD7285036E834BDDDC05AE5F77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49B89ADD21DBAB72A083ABECBDB0AE7ABB29D892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED278FC13D6C5761DBCA8E9057F2B17F67B49DD0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Texture2D ss = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_6, L_4, L_5, 3, (bool)0, /*hidden argument*/NULL);
		V_1 = L_6;
		// ss.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = V_1;
		int32_t L_8;
		L_8 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), (0.0f), (0.0f), ((float)((float)L_8)), ((float)((float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_7, L_10, 0, 0, /*hidden argument*/NULL);
		// ss.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = V_1;
		NullCheck(L_11);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_11, /*hidden argument*/NULL);
		// string filePath = Path.Combine(Application.temporaryCachePath, "shared img.png");
		String_t* L_12;
		L_12 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_12, _stringLiteral49B89ADD21DBAB72A083ABECBDB0AE7ABB29D892, /*hidden argument*/NULL);
		V_2 = L_13;
		// File.WriteAllBytes(filePath, ss.EncodeToPNG());
		String_t* L_14 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_15, /*hidden argument*/NULL);
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_14, L_16, /*hidden argument*/NULL);
		// Destroy(ss);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
		// new NativeShare().AddFile(filePath).SetSubject("Prism Ship").SetText("Game Picture").Share();
		NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * L_18 = (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 *)il2cpp_codegen_object_new(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208_il2cpp_TypeInfo_var);
		NativeShare__ctor_mE88CEC99E9A437191E24742736B419876555C601(L_18, /*hidden argument*/NULL);
		String_t* L_19 = V_2;
		NullCheck(L_18);
		NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * L_20;
		L_20 = NativeShare_AddFile_mE44950A244FCA49E8D8320FDF870C36D45F56831(L_18, L_19, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_20);
		NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * L_21;
		L_21 = NativeShare_SetSubject_m90E61507CB0A243A4E8D841E99F1EAC394668E03(L_20, _stringLiteralED278FC13D6C5761DBCA8E9057F2B17F67B49DD0, /*hidden argument*/NULL);
		NullCheck(L_21);
		NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * L_22;
		L_22 = NativeShare_SetText_mD6DB5DC5EED309BFA85ED73FA4089DE37061EFD0(L_21, _stringLiteral420D942F312515DD7285036E834BDDDC05AE5F77, /*hidden argument*/NULL);
		NullCheck(L_22);
		NativeShare_Share_mD25C91790D2CAC06A5F1216AF8090EFCF40AA04F(L_22, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ShareButton/<TakeScreenshotAndShare>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotAndShareU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D949DC6BA1FF7F59F22F0674B27DDF1BFC29D2D (U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ShareButton/<TakeScreenshotAndShare>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndShareU3Ed__1_System_Collections_IEnumerator_Reset_m90E7F0AAF7D4D577740C3203B0EA5A1580F505F3 (U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTakeScreenshotAndShareU3Ed__1_System_Collections_IEnumerator_Reset_m90E7F0AAF7D4D577740C3203B0EA5A1580F505F3_RuntimeMethod_var)));
	}
}
// System.Object ShareButton/<TakeScreenshotAndShare>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotAndShareU3Ed__1_System_Collections_IEnumerator_get_Current_m9489CB92E13A00441BBCF88196C89410AD5D047A (U3CTakeScreenshotAndShareU3Ed__1_t431751F3FC4479458FFB4C956B177B3FCBF1D8BE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843 (CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitCallback__ctor_mDDC24CC9CFAF017C3A2164D95D76AC3AC5E764C9 (CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitCallback_Invoke_m2BAD7A8E5F65447B4263E286EE34F026C65387A5 (CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommitCallback_BeginInvoke_m4FB80309DB6CFE5566E996AB2A7EE19219E67B1E (CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitCallback_EndInvoke_m18B1F4FE61E0D9C542104F9768E7A98A4E7A6EC4 (CommitCallback_tCE402911284445D73EEE957842824AEEA4F36843 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F (FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchAllCallback__ctor_m969A9DB0A74B870CB5DEBA481EBD6DEDD5001A28 (FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchAllCallback_Invoke_m081BC7B17C461B62D5C3E4DC95D0915AC57B44B1 (FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchAllCallback_BeginInvoke_m7545C96FA69A8BB38D3C6082DDEF5A016E278068 (FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchAllCallback_EndInvoke_mAB28BAB0CB8867DF663E3A77437CE4463C3463D5 (FetchAllCallback_t9AF12DD6FBCAF8CB175AC2FD0EEA7B8280F0958F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E (OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCallback__ctor_m17BD8EA80D12A8A2B7EA24167A78AD7EC886B39F (OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCallback_Invoke_mD21CCCCB589061A5ACAFC70DD4A866B56A928CAD (OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenCallback_BeginInvoke_m830FD7EA4F5FA4BEEFF91266CA00C7C1EB675683 (OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCallback_EndInvoke_mAF4853BBF7CD0A32E1CF967995CBBDE1BFB75BFC (OpenCallback_t848E45B91F0BDEBFBB41B407D4B25C6C73B1FF9E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4 (ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadCallback__ctor_m69A85A3CCCB795C993F90E6A67420D6E8CCBD5A1 (ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadCallback_Invoke_m5EEC516C92E3B076E1C3C7BAC1B868F3D3EF4D7E (ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadCallback_BeginInvoke_m9EAC32712759D6BCCCD2DBB363A0C2A64B23198E (ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadCallback_EndInvoke_mA3CA4494B6722941C238D8236F702033413BE8DD (ReadCallback_t25E98C95990E6B97A240FF3C76F79B258B231AB4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58 (SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotSelectUICallback__ctor_m217F9671D4EF1F846588AFC916F93535D8F39E4D (SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotSelectUICallback_Invoke_mB632EEB212364BC1CB42E2A266D6131F154F4F44 (SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SnapshotSelectUICallback_BeginInvoke_m6560B5729992F856416266474464ADAC9D388281 (SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotSelectUICallback_EndInvoke_m7AF352241F2ABAD3E160E4AB2A11F1FCFE6796F2 (SnapshotSelectUICallback_t9E840B20F0D42021B539826ED1222F94C1424E58 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitResponse__ctor_mFFCF672CF1535105F2239AD6F99DEEE21332A016 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommitResponse_ResponseStatus_m12B0B49030AC87D4528AAEBE15C0D09A29A1A3D7 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, const RuntimeMethod* method)
{
	{
		// return C.SnapshotManager_CommitResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SnapshotManager_SnapshotManager_CommitResponse_GetStatus_mF7DAA2D8B0A404C53D2AA91040895B53273A812D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommitResponse_RequestSucceeded_m49E35504E64784822005E6FE7A49545CA4AD6A33 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, const RuntimeMethod* method)
{
	{
		// return ResponseStatus() > 0;
		int32_t L_0;
		L_0 = CommitResponse_ResponseStatus_m12B0B49030AC87D4528AAEBE15C0D09A29A1A3D7(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * CommitResponse_Data_mDB357EC5F24C89C1E07C0F11136495B9C4677226 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!RequestSucceeded())
		bool L_0;
		L_0 = CommitResponse_RequestSucceeded_m49E35504E64784822005E6FE7A49545CA4AD6A33(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Request did not succeed");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CCF37ED1AC77740D7550B240D651F4CD1C3BA3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommitResponse_Data_mDB357EC5F24C89C1E07C0F11136495B9C4677226_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new NativeSnapshotMetadata(C.SnapshotManager_CommitResponse_GetData(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_3;
		L_3 = SnapshotManager_SnapshotManager_CommitResponse_GetData_mED912D1DA85E7CF60D25515BBA4B41C3E4217C6B(L_2, /*hidden argument*/NULL);
		NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * L_4 = (NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B *)il2cpp_codegen_object_new(NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		NativeSnapshotMetadata__ctor_m8080941A4D636AB5433682024C3C1C8F3B1275A2(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitResponse_CallDispose_m813A9940C201EC749E52014A2024D7A822F08FF4 (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.SnapshotManager_CommitResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		SnapshotManager_SnapshotManager_CommitResponse_Dispose_m3A8AF116649CCD5E5C37EAA505B2C7817187A658(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * CommitResponse_FromPointer_m5BEB2197765528A02088ADE3F3716CA0F9335768 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E *)NULL;
	}

IL_0015:
	{
		// return new CommitResponse(pointer);
		intptr_t L_3 = ___pointer0;
		CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E * L_4 = (CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E *)il2cpp_codegen_object_new(CommitResponse_t680DB69E66857629EC8CC1B738380612589B6A5E_il2cpp_TypeInfo_var);
		CommitResponse__ctor_mFFCF672CF1535105F2239AD6F99DEEE21332A016(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchAllResponse__ctor_m9076E0FA3D661C9F38CB6657984F42F499BE9785 (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchAllResponse_ResponseStatus_m43F0ABEE5F70C7DB3A1894DE980E2A604D229889 (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, const RuntimeMethod* method)
{
	{
		// return C.SnapshotManager_FetchAllResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SnapshotManager_SnapshotManager_FetchAllResponse_GetStatus_mBF3B9F24055BE8FC26D1D2492B35C7E614196086(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FetchAllResponse_RequestSucceeded_m3CB108A4C4374C4213969E62FCBE7DA1F6D5DD71 (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, const RuntimeMethod* method)
{
	{
		// return ResponseStatus() > 0;
		int32_t L_0;
		L_0 = FetchAllResponse_ResponseStatus_m43F0ABEE5F70C7DB3A1894DE980E2A604D229889(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata> GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchAllResponse_Data_m2E7A6E1E6AB767E64F0074CC2AF3A28726A24D3C (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchAllResponse_U3CDataU3Eb__3_0_m4B9C5215AF22FF8C46325208B1E6CB60F6F246BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA4758B5CED4CAFF3E38540333C8412D99D328161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_ToEnumerable_TisNativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_m8495216E39BACFAC1B85CE4D3564EA7FEFB386A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PInvokeUtilities.ToEnumerable<NativeSnapshotMetadata>(
		//     C.SnapshotManager_FetchAllResponse_GetData_Length(SelfPtr()),
		//     index => new NativeSnapshotMetadata(
		//         C.SnapshotManager_FetchAllResponse_GetData_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = SnapshotManager_SnapshotManager_FetchAllResponse_GetData_Length_m0D6632304DA6F6DACE948AB9CFC79E51E81AFA55(L_0, /*hidden argument*/NULL);
		Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527 * L_2 = (Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527 *)il2cpp_codegen_object_new(Func_2_t9FE3C35A446682E31CC1CFC15C6D9FA85C3E1527_il2cpp_TypeInfo_var);
		Func_2__ctor_mA4758B5CED4CAFF3E38540333C8412D99D328161(L_2, __this, (intptr_t)((intptr_t)FetchAllResponse_U3CDataU3Eb__3_0_m4B9C5215AF22FF8C46325208B1E6CB60F6F246BD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA4758B5CED4CAFF3E38540333C8412D99D328161_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = PInvokeUtilities_ToEnumerable_TisNativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_m8495216E39BACFAC1B85CE4D3564EA7FEFB386A5(L_1, L_2, /*hidden argument*/PInvokeUtilities_ToEnumerable_TisNativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_m8495216E39BACFAC1B85CE4D3564EA7FEFB386A5_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchAllResponse_CallDispose_mD61B24114BBA49A1E7F34082556785B6E19250DD (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.SnapshotManager_FetchAllResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		SnapshotManager_SnapshotManager_FetchAllResponse_Dispose_m673C80C395F1660941DAFDA96E6DA59B5DDD610D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * FetchAllResponse_FromPointer_mA98C2D33C1E394299848F7A8B3B044E1E44C748E (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C *)NULL;
	}

IL_0015:
	{
		// return new FetchAllResponse(pointer);
		intptr_t L_3 = ___pointer0;
		FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * L_4 = (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C *)il2cpp_codegen_object_new(FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C_il2cpp_TypeInfo_var);
		FetchAllResponse__ctor_m9076E0FA3D661C9F38CB6657984F42F499BE9785(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse::<Data>b__3_0(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * FetchAllResponse_U3CDataU3Eb__3_0_m4B9C5215AF22FF8C46325208B1E6CB60F6F246BD (FetchAllResponse_t60075D93F467D1B333D33D3EA5340CD5671ED92C * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index => new NativeSnapshotMetadata(
		//     C.SnapshotManager_FetchAllResponse_GetData_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1 = ___index0;
		intptr_t L_2;
		L_2 = SnapshotManager_SnapshotManager_FetchAllResponse_GetData_GetElement_mE6DB308664580B803B3584123C18E03E9429D0B7(L_0, L_1, /*hidden argument*/NULL);
		NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * L_3 = (NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B *)il2cpp_codegen_object_new(NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		NativeSnapshotMetadata__ctor_m8080941A4D636AB5433682024C3C1C8F3B1275A2(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenResponse__ctor_mC2321B2F0E278257FB47459A45F95E04CE7AC429 (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenResponse_RequestSucceeded_m024CF937698B9346BABDDFB198E1F6DC3C8CFB9E (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, const RuntimeMethod* method)
{
	{
		// return ResponseStatus() > 0;
		int32_t L_0;
		L_0 = OpenResponse_ResponseStatus_m0465190E94B370962DDDC81E934760A869F43A68(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenResponse_ResponseStatus_m0465190E94B370962DDDC81E934760A869F43A68 (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, const RuntimeMethod* method)
{
	{
		// return C.SnapshotManager_OpenResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SnapshotManager_SnapshotManager_OpenResponse_GetStatus_mED31676E850D79CDEC29BB38A466AD32A12F1CA3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenResponse_ConflictId_m9BE1A9CD0FA8E289E9A41DBC349CF6AFAAE3487C (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenResponse_U3CConflictIdU3Eb__3_0_m80099EED86C9F5BD3B256E629E3EDB733BC15D3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ResponseStatus() != Status.SnapshotOpenStatus.VALID_WITH_CONFLICT)
		int32_t L_0;
		L_0 = OpenResponse_ResponseStatus_m0465190E94B370962DDDC81E934760A869F43A68(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("OpenResponse did not have a conflict");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B52E6EC0ED746CB86D82CF4ABF73B8079029494)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenResponse_ConflictId_m9BE1A9CD0FA8E289E9A41DBC349CF6AFAAE3487C_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return PInvokeUtilities.OutParamsToString(
		//     (out_string, out_size) => C.SnapshotManager_OpenResponse_GetConflictId(
		//         SelfPtr(), out_string, out_size));
		OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF * L_2 = (OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF *)il2cpp_codegen_object_new(OutStringMethod_t126BAE3BD6B9F5330CBF4F39857DEB95FBCE96DF_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mAAF19348A9F0360954676471648DBFE7A6F0FEB1(L_2, __this, (intptr_t)((intptr_t)OpenResponse_U3CConflictIdU3Eb__3_0_m80099EED86C9F5BD3B256E629E3EDB733BC15D3F_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = PInvokeUtilities_OutParamsToString_m060278202999A51443F06BFD3518EF106E512063(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * OpenResponse_Data_m40F1C62C172C9A3C83BA422DCBDF574F0B3CABF0 (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ResponseStatus() != Status.SnapshotOpenStatus.VALID)
		int32_t L_0;
		L_0 = OpenResponse_ResponseStatus_m0465190E94B370962DDDC81E934760A869F43A68(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("OpenResponse had a conflict");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81F7DFA06DEEC7C37A5DB5EDDD317433D1224A57)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenResponse_Data_m40F1C62C172C9A3C83BA422DCBDF574F0B3CABF0_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return new NativeSnapshotMetadata(C.SnapshotManager_OpenResponse_GetData(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_3;
		L_3 = SnapshotManager_SnapshotManager_OpenResponse_GetData_mB2246F00DBF2CB30C5C56633BBD4A1C65565C6BE(L_2, /*hidden argument*/NULL);
		NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * L_4 = (NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B *)il2cpp_codegen_object_new(NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		NativeSnapshotMetadata__ctor_m8080941A4D636AB5433682024C3C1C8F3B1275A2(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictOriginal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * OpenResponse_ConflictOriginal_m81D3BA98DB5107EF8E011643342CF52DB2D276ED (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ResponseStatus() != Status.SnapshotOpenStatus.VALID_WITH_CONFLICT)
		int32_t L_0;
		L_0 = OpenResponse_ResponseStatus_m0465190E94B370962DDDC81E934760A869F43A68(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("OpenResponse did not have a conflict");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B52E6EC0ED746CB86D82CF4ABF73B8079029494)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenResponse_ConflictOriginal_m81D3BA98DB5107EF8E011643342CF52DB2D276ED_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return new NativeSnapshotMetadata(
		//     C.SnapshotManager_OpenResponse_GetConflictOriginal(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_3;
		L_3 = SnapshotManager_SnapshotManager_OpenResponse_GetConflictOriginal_m3EBA900C23E9A9E2A5103ABA6D0E2C61694EF42F(L_2, /*hidden argument*/NULL);
		NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * L_4 = (NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B *)il2cpp_codegen_object_new(NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		NativeSnapshotMetadata__ctor_m8080941A4D636AB5433682024C3C1C8F3B1275A2(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictUnmerged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * OpenResponse_ConflictUnmerged_m36470C18230914E6C33024C6FC7EBAB38A3C7B0C (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ResponseStatus() != Status.SnapshotOpenStatus.VALID_WITH_CONFLICT)
		int32_t L_0;
		L_0 = OpenResponse_ResponseStatus_m0465190E94B370962DDDC81E934760A869F43A68(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("OpenResponse did not have a conflict");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B52E6EC0ED746CB86D82CF4ABF73B8079029494)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenResponse_ConflictUnmerged_m36470C18230914E6C33024C6FC7EBAB38A3C7B0C_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return new NativeSnapshotMetadata(
		//     C.SnapshotManager_OpenResponse_GetConflictUnmerged(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_3;
		L_3 = SnapshotManager_SnapshotManager_OpenResponse_GetConflictUnmerged_m8F2FAF84FEDC1DDBFDDEFDAC50FAC59700E034F3(L_2, /*hidden argument*/NULL);
		NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * L_4 = (NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B *)il2cpp_codegen_object_new(NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		NativeSnapshotMetadata__ctor_m8080941A4D636AB5433682024C3C1C8F3B1275A2(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenResponse_CallDispose_mE68A0B0BE337CC6FD85C3D02E132F4ABC1391216 (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.SnapshotManager_OpenResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		SnapshotManager_SnapshotManager_OpenResponse_Dispose_m4BE1FC50804B4522CC337EBAE1A718982FDF1576(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * OpenResponse_FromPointer_mAE13DFEB63096696CF582459E1A58E1DF257C76A (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 *)NULL;
	}

IL_0015:
	{
		// return new OpenResponse(pointer);
		intptr_t L_3 = ___pointer0;
		OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * L_4 = (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 *)il2cpp_codegen_object_new(OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1_il2cpp_TypeInfo_var);
		OpenResponse__ctor_mC2321B2F0E278257FB47459A45F95E04CE7AC429(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.UIntPtr GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::<ConflictId>b__3_0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OpenResponse_U3CConflictIdU3Eb__3_0_m80099EED86C9F5BD3B256E629E3EDB733BC15D3F (OpenResponse_tF157EA4DF5C7990329EE5CB1212D469456374DA1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		// (out_string, out_size) => C.SnapshotManager_OpenResponse_GetConflictId(
		//     SelfPtr(), out_string, out_size));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = SnapshotManager_SnapshotManager_OpenResponse_GetConflictId_mCD61955370C82EFDC08A1FEBE1C594A0B93F3FB9(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadResponse__ctor_mA54656FD44CC5E9939BEA9DAA5A3BA0F5D2987D2 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadResponse_ResponseStatus_mD43EB241720853829EF499EB3B894535336F1755 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, const RuntimeMethod* method)
{
	{
		// return C.SnapshotManager_CommitResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SnapshotManager_SnapshotManager_CommitResponse_GetStatus_mF7DAA2D8B0A404C53D2AA91040895B53273A812D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadResponse_RequestSucceeded_m8DF677AD234E4D050E95E8024F0E7F01A68CEE83 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, const RuntimeMethod* method)
{
	{
		// return ResponseStatus() > 0;
		int32_t L_0;
		L_0 = ReadResponse_ResponseStatus_mD43EB241720853829EF499EB3B894535336F1755(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Byte[] GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ReadResponse_Data_mDC06C5189729B5D7DCB63E6C293D84F9EA49F3A8 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutMethod_1__ctor_m447C935805C8ABA4F695666B18D5B16838436676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_OutParamsToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5C27AA084248C2B70B01B0B00CF8A65C75493B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadResponse_U3CDataU3Eb__3_0_m937D00FD06E0C9DE8065BF585AA9061A6062E6E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!RequestSucceeded())
		bool L_0;
		L_0 = ReadResponse_RequestSucceeded_m8DF677AD234E4D050E95E8024F0E7F01A68CEE83(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Request did not succeed");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CCF37ED1AC77740D7550B240D651F4CD1C3BA3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadResponse_Data_mDC06C5189729B5D7DCB63E6C293D84F9EA49F3A8_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return PInvokeUtilities.OutParamsToArray<byte>(
		//     (out_bytes, out_size) => C.SnapshotManager_ReadResponse_GetData(
		//         SelfPtr(), out_bytes, out_size));
		OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 * L_2 = (OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92 *)il2cpp_codegen_object_new(OutMethod_1_t0AE36E4DC1744223CD5C952E2010A10572D77E92_il2cpp_TypeInfo_var);
		OutMethod_1__ctor_m447C935805C8ABA4F695666B18D5B16838436676(L_2, __this, (intptr_t)((intptr_t)ReadResponse_U3CDataU3Eb__3_0_m937D00FD06E0C9DE8065BF585AA9061A6062E6E9_RuntimeMethod_var), /*hidden argument*/OutMethod_1__ctor_m447C935805C8ABA4F695666B18D5B16838436676_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = PInvokeUtilities_OutParamsToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5C27AA084248C2B70B01B0B00CF8A65C75493B9A(L_2, /*hidden argument*/PInvokeUtilities_OutParamsToArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5C27AA084248C2B70B01B0B00CF8A65C75493B9A_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadResponse_CallDispose_m80D44660E5F788E51EE8CC0A49CC859021DF2EB3 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.SnapshotManager_ReadResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		SnapshotManager_SnapshotManager_ReadResponse_Dispose_mECECC68D55697B2A3528611E1BB67C87703096A2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * ReadResponse_FromPointer_mA3B7DBA1C802752AA4C7B904E3DABEF6E72942A9 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 *)NULL;
	}

IL_0015:
	{
		// return new ReadResponse(pointer);
		intptr_t L_3 = ___pointer0;
		ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * L_4 = (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 *)il2cpp_codegen_object_new(ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606_il2cpp_TypeInfo_var);
		ReadResponse__ctor_mA54656FD44CC5E9939BEA9DAA5A3BA0F5D2987D2(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.UIntPtr GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse::<Data>b__3_0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t ReadResponse_U3CDataU3Eb__3_0_m937D00FD06E0C9DE8065BF585AA9061A6062E6E9 (ReadResponse_t8726DF9634D62F2F3872F652F902C097F65C9606 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		// (out_bytes, out_size) => C.SnapshotManager_ReadResponse_GetData(
		//     SelfPtr(), out_bytes, out_size));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___out_bytes0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = SnapshotManager_SnapshotManager_ReadResponse_GetData_m2A999A1ED2AD87FA261010A9616B5CC5E45D16D5(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotSelectUIResponse__ctor_mDDD62304DFC64583052F4D357F8DA37C474D5F22 (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::RequestStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SnapshotSelectUIResponse_RequestStatus_m1BFCD68606C5314634666F3198126D104E2FC76C (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, const RuntimeMethod* method)
{
	{
		// return C.SnapshotManager_SnapshotSelectUIResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetStatus_m6A1937181B7DCBD143D0DEA98E8E8FC45240D198(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SnapshotSelectUIResponse_RequestSucceeded_mE97BFFB7F5921D17B8340774FCD959BCCFA43F07 (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, const RuntimeMethod* method)
{
	{
		// return RequestStatus() > 0;
		int32_t L_0;
		L_0 = SnapshotSelectUIResponse_RequestStatus_m1BFCD68606C5314634666F3198126D104E2FC76C(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * SnapshotSelectUIResponse_Data_m376A48F37EAB295E350F52CE7370923C402A2590 (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!RequestSucceeded())
		bool L_0;
		L_0 = SnapshotSelectUIResponse_RequestSucceeded_mE97BFFB7F5921D17B8340774FCD959BCCFA43F07(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Request did not succeed");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CCF37ED1AC77740D7550B240D651F4CD1C3BA3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SnapshotSelectUIResponse_Data_m376A48F37EAB295E350F52CE7370923C402A2590_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new NativeSnapshotMetadata(
		//     C.SnapshotManager_SnapshotSelectUIResponse_GetData(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_3;
		L_3 = SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetData_m60481B0F3A833DD8DC6A7ED6B964A9B4D5116BDA(L_2, /*hidden argument*/NULL);
		NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B * L_4 = (NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B *)il2cpp_codegen_object_new(NativeSnapshotMetadata_tD999F2D5DB0B46E385D9801AA8270B5AC84F073B_il2cpp_TypeInfo_var);
		NativeSnapshotMetadata__ctor_m8080941A4D636AB5433682024C3C1C8F3B1275A2(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotSelectUIResponse_CallDispose_mD4839FF1300A67CAD2A422CA12F89C15DD568FF3 (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.SnapshotManager_SnapshotSelectUIResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_Dispose_mDEA7D44E4F8D07D23CE3C628E7A8352E232226C5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * SnapshotSelectUIResponse_FromPointer_m369B2B6255949531DD269287292E2D4B075EC23F (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB *)NULL;
	}

IL_0015:
	{
		// return new SnapshotSelectUIResponse(pointer);
		intptr_t L_3 = ___pointer0;
		SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB * L_4 = (SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB *)il2cpp_codegen_object_new(SnapshotSelectUIResponse_t69B8594E1B40BE4890D02F4E77F433DD27C701CB_il2cpp_TypeInfo_var);
		SnapshotSelectUIResponse__ctor_mDDD62304DFC64583052F4D357F8DA37C474D5F22(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnManager/<AsteroidWave>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsteroidWaveU3Ed__16__ctor_mB30A89C8F8B18CD4E36239A7037A18930A4875BA (U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpawnManager/<AsteroidWave>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsteroidWaveU3Ed__16_System_IDisposable_Dispose_mA4FF7C0131C263197F0478EDB3B7ABD9EBD277C6 (U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpawnManager/<AsteroidWave>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAsteroidWaveU3Ed__16_MoveNext_m23419E6730DFFB4178A92CA49CADD6640B391221 (U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_00a2;
			}
			case 3:
			{
				goto IL_00f1;
			}
			case 4:
			{
				goto IL_014e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_006b;
	}

IL_0033:
	{
		// respawnTime = 2f;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_respawnTime_9((2.0f));
		// yield return new WaitForSeconds(respawnTime);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_respawnTime_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0058:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SpawnAsteroid(wave);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_7 = V_1;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_wave_4();
		NullCheck(L_7);
		SpawnManager_SpawnAsteroid_m4CA7C4C4997F26C931855B004AB7AFAD621AB10B(L_7, L_9, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// while(wave == 1)
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_wave_4();
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		// spawnEnemy = true;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_12 = V_1;
		NullCheck(L_12);
		L_12->set_spawnEnemy_15((bool)1);
		goto IL_00c1;
	}

IL_007d:
	{
		// respawnTime = 2f;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_13 = V_1;
		NullCheck(L_13);
		L_13->set_respawnTime_9((2.0f));
		// yield return new WaitForSeconds(respawnTime);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_respawnTime_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SpawnAsteroid(wave);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_17 = V_1;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_wave_4();
		NullCheck(L_17);
		SpawnManager_SpawnAsteroid_m4CA7C4C4997F26C931855B004AB7AFAD621AB10B(L_17, L_19, /*hidden argument*/NULL);
		// SpawnAsteroid(wave);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_20 = V_1;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_wave_4();
		NullCheck(L_20);
		SpawnManager_SpawnAsteroid_m4CA7C4C4997F26C931855B004AB7AFAD621AB10B(L_20, L_22, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// while (wave ==2)
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_wave_4();
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0110;
	}

IL_00cc:
	{
		// respawnTime = 2f;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_25 = V_1;
		NullCheck(L_25);
		L_25->set_respawnTime_9((2.0f));
		// yield return new WaitForSeconds(respawnTime);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->get_respawnTime_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, L_27, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00f1:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SpawnAsteroid(wave);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_29 = V_1;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_wave_4();
		NullCheck(L_29);
		SpawnManager_SpawnAsteroid_m4CA7C4C4997F26C931855B004AB7AFAD621AB10B(L_29, L_31, /*hidden argument*/NULL);
		// SpawnWall(wave);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_32 = V_1;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_wave_4();
		NullCheck(L_32);
		SpawnManager_SpawnWall_mDCA5A6AE61289EBB251F4FDE950697ED87B527E1(L_32, L_34, /*hidden argument*/NULL);
	}

IL_0110:
	{
		// while (wave == 3)
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_wave_4();
		if ((((int32_t)L_36) == ((int32_t)3)))
		{
			goto IL_00cc;
		}
	}
	{
		// spawnEnemy = false;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_37 = V_1;
		NullCheck(L_37);
		L_37->set_spawnEnemy_15((bool)0);
		// spawnBoss = true;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_38 = V_1;
		NullCheck(L_38);
		L_38->set_spawnBoss_16((bool)1);
		goto IL_016d;
	}

IL_0129:
	{
		// respawnTime = 1f;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_39 = V_1;
		NullCheck(L_39);
		L_39->set_respawnTime_9((1.0f));
		// yield return new WaitForSeconds(respawnTime);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_40 = V_1;
		NullCheck(L_40);
		float L_41 = L_40->get_respawnTime_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_42 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_42, L_41, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_42);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_014e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SpawnAsteroid(wave);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_43 = V_1;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_wave_4();
		NullCheck(L_43);
		SpawnManager_SpawnAsteroid_m4CA7C4C4997F26C931855B004AB7AFAD621AB10B(L_43, L_45, /*hidden argument*/NULL);
		// SpawnWall(wave);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_46 = V_1;
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_wave_4();
		NullCheck(L_46);
		SpawnManager_SpawnWall_mDCA5A6AE61289EBB251F4FDE950697ED87B527E1(L_46, L_48, /*hidden argument*/NULL);
	}

IL_016d:
	{
		// while (wave == 4)
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_wave_4();
		if ((((int32_t)L_50) == ((int32_t)4)))
		{
			goto IL_0129;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SpawnManager/<AsteroidWave>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsteroidWaveU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8CA6C1A61A907393265CBF96B9409B0F40271B05 (U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpawnManager/<AsteroidWave>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsteroidWaveU3Ed__16_System_Collections_IEnumerator_Reset_mFC664DC87913FFF1FB3F5B4BDDF2C65C607B7304 (U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAsteroidWaveU3Ed__16_System_Collections_IEnumerator_Reset_mFC664DC87913FFF1FB3F5B4BDDF2C65C607B7304_RuntimeMethod_var)));
	}
}
// System.Object SpawnManager/<AsteroidWave>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsteroidWaveU3Ed__16_System_Collections_IEnumerator_get_Current_m9BAC017A4F819CDDE25CF13F52F5673CCB3A44BA (U3CAsteroidWaveU3Ed__16_tB7254394719595CEE0E4F446A7C97565D2C28650 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326 (FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchForPlayerCallback__ctor_m9E7D653F38914BA5BA3D44908438368469E40BBC (FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchForPlayerCallback_Invoke_m9A989DD7ED794A41DAF17CE9487A6C80605C64E8 (FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchForPlayerCallback_BeginInvoke_m335CD7FCB7D0070EFA68A7A77D59028DE06D52B2 (FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchForPlayerCallback_EndInvoke_m4200B18AE9EB1FD907985D29B42CD444D7DDEE49 (FetchForPlayerCallback_tD70A4E862A511B99685B3E464D4321FB89407326 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchForPlayerResponse__ctor_m954DF5E4770919AACF5DC2C0B7E5B9317DD7548D (FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal FetchForPlayerResponse(IntPtr selfPointer) : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse::Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchForPlayerResponse_Status_m446CC53DE486A947C57CEF1050B881AB15691258 (FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 * __this, const RuntimeMethod* method)
{
	{
		// return C.StatsManager_FetchForPlayerResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = StatsManager_StatsManager_FetchForPlayerResponse_GetStatus_mB2D99928C5E56B033FEEB0A12AC59E1C640A75CB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.Native.PInvoke.NativePlayerStats GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse::PlayerStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E * FetchForPlayerResponse_PlayerStats_m65F0DB57ABD6C4D06B782D3B4E5CE20EF7BCA73E (FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr p = C.StatsManager_FetchForPlayerResponse_GetData(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_1;
		L_1 = StatsManager_StatsManager_FetchForPlayerResponse_GetData_m2CC89973A5BD5C069D3FB73266D31EF814F10F32(L_0, /*hidden argument*/NULL);
		// return new NativePlayerStats(p);
		NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E * L_2 = (NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E *)il2cpp_codegen_object_new(NativePlayerStats_t0225F45BE01E86AC16BFFD67A719FEC266C8599E_il2cpp_TypeInfo_var);
		NativePlayerStats__ctor_mCDC478EA2D92A80EBDC778EC951E0C1FBE7CAFBF(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchForPlayerResponse_CallDispose_mCB82043E70FFD300B62C025D6F907D89F410DF85 (FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// C.StatsManager_FetchForPlayerResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		StatsManager_StatsManager_FetchForPlayerResponse_Dispose_m296B5A5DA420137E55A80EF14F8A978073A4081A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 * FetchForPlayerResponse_FromPointer_m5F4FB17271B93689BA979FA1030775A55BFC64B9 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero)) {
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 *)NULL;
	}

IL_0015:
	{
		// return new FetchForPlayerResponse(pointer);
		intptr_t L_3 = ___pointer0;
		FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 * L_4 = (FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657 *)il2cpp_codegen_object_new(FetchForPlayerResponse_tCB68BDE8FD437A7DFCEE1794CBA34A78B28D0657_il2cpp_TypeInfo_var);
		FetchForPlayerResponse__ctor_m954DF5E4770919AACF5DC2C0B7E5B9317DD7548D(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchInboxUIResponse__ctor_m4ED1048D98B3A08880C04C19B30D25AA73BCE45D (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse::UiStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatchInboxUIResponse_UiStatus_m2315AB93F11B28B94886FF5B8D3F996A84FE0C5B (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * __this, const RuntimeMethod* method)
{
	{
		// return TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus_m7911DA7A8770502394F8557F8C07991840D204B8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse::Match()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * MatchInboxUIResponse_Match_m356F5213563E7115067E42741BB816C2A47C1248 (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UiStatus() != CommonErrorStatus.UIStatus.VALID)
		int32_t L_0;
		L_0 = MatchInboxUIResponse_UiStatus_m2315AB93F11B28B94886FF5B8D3F996A84FE0C5B(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 *)NULL;
	}

IL_000b:
	{
		// return new NativeTurnBasedMatch(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch_mDA4EAA6371C07A5C059EF6BF9BB06BC8044302FD(L_1, /*hidden argument*/NULL);
		NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * L_3 = (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 *)il2cpp_codegen_object_new(NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		NativeTurnBasedMatch__ctor_mEF33063B321A44B2C64AF812CBA332018518DD13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchInboxUIResponse_CallDispose_mD53C1B5192ED60659D6B41A39DF9FB562ABDCC7F (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose_m630CF89F95573A8607FCA54D8E725A27B3EE6952(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * MatchInboxUIResponse_FromPointer_mF563FEA82766D38B2B253E268A3ABDF1CCF9B172 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F *)NULL;
	}

IL_0015:
	{
		// return new MatchInboxUIResponse(pointer);
		intptr_t L_3 = ___pointer0;
		MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F * L_4 = (MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F *)il2cpp_codegen_object_new(MatchInboxUIResponse_tE650E942DAAD09BF3867AAEA7BE006D530232F2F_il2cpp_TypeInfo_var);
		MatchInboxUIResponse__ctor_m4ED1048D98B3A08880C04C19B30D25AA73BCE45D(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchCallback__ctor_m8AFAC40A88099C2A0D4FA876A3600BB8D4B1BD6E (TurnBasedMatchCallback_t6D181C2BA99E27BBD0AEDA7B4C2DA9E2414EA2F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::Invoke(GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchCallback_Invoke_m6EAF442E57600D75978CE058EE35D039A8FCC8EE (TurnBasedMatchCallback_t6D181C2BA99E27BBD0AEDA7B4C2DA9E2414EA2F4 * __this, TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * ___response0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___response0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___response0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___response0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * >::Invoke(targetMethod, targetThis, ___response0);
					else
						GenericVirtActionInvoker1< TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * >::Invoke(targetMethod, targetThis, ___response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___response0);
					else
						VirtActionInvoker1< TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___response0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___response0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::BeginInvoke(GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnBasedMatchCallback_BeginInvoke_m559462CA70202817E2CFAD618AD09CB54AB338FE (TurnBasedMatchCallback_t6D181C2BA99E27BBD0AEDA7B4C2DA9E2414EA2F4 * __this, TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * ___response0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___response0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchCallback_EndInvoke_mBD8CBE61B437BE0E6285BCCDB138D415DDD5EED7 (TurnBasedMatchCallback_t6D181C2BA99E27BBD0AEDA7B4C2DA9E2414EA2F4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchResponse__ctor_mE8A7950FE7521BAAC79800FA6AD65284FC9722C7 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMatchResponse_ResponseStatus_m9306254887B9569323A69CB6A07B8497954C3802 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, const RuntimeMethod* method)
{
	{
		// return TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus_mAB1428984F6077A133056738C908CFBD51908B55(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::RequestSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TurnBasedMatchResponse_RequestSucceeded_mCBEB7ECB1407AF179BF309EF2B0ECF8682D28618 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, const RuntimeMethod* method)
{
	{
		// return ResponseStatus() > 0;
		int32_t L_0;
		L_0 = TurnBasedMatchResponse_ResponseStatus_m9306254887B9569323A69CB6A07B8497954C3802(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::Match()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * TurnBasedMatchResponse_Match_m61328F196C825ECFA8E669DCDB46D04746EEB0D3 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!RequestSucceeded())
		bool L_0;
		L_0 = TurnBasedMatchResponse_RequestSucceeded_mCBEB7ECB1407AF179BF309EF2B0ECF8682D28618(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 *)NULL;
	}

IL_000a:
	{
		// return new NativeTurnBasedMatch(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch(SelfPtr()));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch_m6F5F87A61E17EF45211383464D2C31AF785D2161(L_1, /*hidden argument*/NULL);
		NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * L_3 = (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 *)il2cpp_codegen_object_new(NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		NativeTurnBasedMatch__ctor_mEF33063B321A44B2C64AF812CBA332018518DD13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchResponse_CallDispose_m3AA0FEAAE2B2FCAD5ADA7EA28C722D927089D897 (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose(selfPointer);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = ___selfPointer0;
		TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose_mD5956B47C7834DA407FB7AE24A3FE57D4277993D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * TurnBasedMatchResponse_FromPointer_m41389FAA8BD535C7806E7D86B6D281CD7A786772 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.Equals(IntPtr.Zero))
		intptr_t L_0 = (0);
		RuntimeObject * L_1 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_0);
		bool L_2;
		L_2 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&___pointer0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 *)NULL;
	}

IL_0015:
	{
		// return new TurnBasedMatchResponse(pointer);
		intptr_t L_3 = ___pointer0;
		TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 * L_4 = (TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280 *)il2cpp_codegen_object_new(TurnBasedMatchResponse_tB2B7F0EF3BEA9FF69069A7AD0490A794C16EF280_il2cpp_TypeInfo_var);
		TurnBasedMatchResponse__ctor_mE8A7950FE7521BAAC79800FA6AD65284FC9722C7(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchesResponse__ctor_mECEABDE58D55F392281774FF5AC126F88E40BFF2 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, intptr_t ___selfPointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(selfPointer)
		intptr_t L_0 = ___selfPointer0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseReferenceHolder_tF3C7A5E641FBD620A6323740B39850A103F3C255_il2cpp_TypeInfo_var);
		BaseReferenceHolder__ctor_mEDC59A7F7503F532992AD0183658A36F8716AC51(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchesResponse_CallDispose_m86CF0666CD97EA44D7D13DBB7F5C7645A357CD47 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___selfPointer0, const RuntimeMethod* method)
{
	{
		// TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose_m4F8C3595F0BDE0E26320A50F14846DC74C438D71(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMatchesResponse_Status_m16495D3547DDA99439881C2C772748B86D24B06E (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	{
		// return TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus_mA8933F85D559A90C3130727495413A5A99C5866E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation> GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::Invitations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnBasedMatchesResponse_Invitations_m9DAF3CF87371D53F846BF8C7F3F7368ED8EE0B39 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedMatchesResponse_U3CInvitationsU3Eb__3_0_mD9B495562D706B69C60E0073A67DEABD90A116C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PInvokeUtilities.ToEnumerable(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length(SelfPtr()),
		//     index => new MultiplayerInvitation(
		//         TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length_mB1BE1360919FAA94C6BC3A272623A8DCADA23786(L_0, /*hidden argument*/NULL);
		Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 * L_2 = (Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2 *)il2cpp_codegen_object_new(Func_2_t7A1BEBC15E24AB7007106F7EED70CCC5AC3292D2_il2cpp_TypeInfo_var);
		Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3(L_2, __this, (intptr_t)((intptr_t)TurnBasedMatchesResponse_U3CInvitationsU3Eb__3_0_mD9B495562D706B69C60E0073A67DEABD90A116C7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m058C2706467E5D1CD5D389A5A1E2D92A9FDA18D3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE(L_1, L_2, /*hidden argument*/PInvokeUtilities_ToEnumerable_TisMultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_m2396F8BD02114BDCBD0E666477BCCFFBD2F36CCE_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::InvitationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMatchesResponse_InvitationCount_mB4EE388DB1C586DE10CC453BE9BF457876BE153F (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UIntPtr ptr =
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length_mB1BE1360919FAA94C6BC3A272623A8DCADA23786(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return (int)ptr.ToUInt32();
		uint32_t L_2;
		L_2 = UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC((uintptr_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::MyTurnMatches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnBasedMatchesResponse_MyTurnMatches_mEE9D1F34070E1712E1797C3BFF5EF59F4A3B0B89 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedMatchesResponse_U3CMyTurnMatchesU3Eb__5_0_m27807EE08D7A1C742A77BB7F79D2F561080328D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PInvokeUtilities.ToEnumerable(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length(SelfPtr()),
		//     index => new NativeTurnBasedMatch(
		//         TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length_m8F486ABCFC592F69DB44259133F335975A067196(L_0, /*hidden argument*/NULL);
		Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 * L_2 = (Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 *)il2cpp_codegen_object_new(Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899_il2cpp_TypeInfo_var);
		Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641(L_2, __this, (intptr_t)((intptr_t)TurnBasedMatchesResponse_U3CMyTurnMatchesU3Eb__5_0_m27807EE08D7A1C742A77BB7F79D2F561080328D9_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347(L_1, L_2, /*hidden argument*/PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::MyTurnMatchesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMatchesResponse_MyTurnMatchesCount_mF286FFB2E88AF4F2670C57AC4A81530EBAAD8E42 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UIntPtr ptr =
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length_m8F486ABCFC592F69DB44259133F335975A067196(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return (int)ptr.ToUInt32();
		uint32_t L_2;
		L_2 = UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC((uintptr_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::TheirTurnMatches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnBasedMatchesResponse_TheirTurnMatches_m501F5C4A25F7BB4F122A7D0D47611A7382B3FE06 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedMatchesResponse_U3CTheirTurnMatchesU3Eb__7_0_m9E451CCC3EAAAD64CAF794BABA1DD8137D1592CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PInvokeUtilities.ToEnumerable(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length(SelfPtr()),
		//     index => new NativeTurnBasedMatch(
		//         TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length_m24671A0A119CBD59671CDEB066E9FD105183F3FB(L_0, /*hidden argument*/NULL);
		Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 * L_2 = (Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 *)il2cpp_codegen_object_new(Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899_il2cpp_TypeInfo_var);
		Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641(L_2, __this, (intptr_t)((intptr_t)TurnBasedMatchesResponse_U3CTheirTurnMatchesU3Eb__7_0_m9E451CCC3EAAAD64CAF794BABA1DD8137D1592CE_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347(L_1, L_2, /*hidden argument*/PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::TheirTurnMatchesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMatchesResponse_TheirTurnMatchesCount_m9CACEF5A082E864254119081891460C6347AC8B1 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UIntPtr ptr =
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length_m24671A0A119CBD59671CDEB066E9FD105183F3FB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return (int)ptr.ToUInt32();
		uint32_t L_2;
		L_2 = UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC((uintptr_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::CompletedMatches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnBasedMatchesResponse_CompletedMatches_m44000FF523015FC32E5F70A8FEF5803F2F62EC0B (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedMatchesResponse_U3CCompletedMatchesU3Eb__9_0_m3C572C1215A193FBF99B73E6A008A0E90AAEA7A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PInvokeUtilities.ToEnumerable(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length(SelfPtr()),
		//     index => new NativeTurnBasedMatch(
		//         TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length_m80B0A6D7CD2EF8829F68CF2A384AD25A45F182C8(L_0, /*hidden argument*/NULL);
		Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 * L_2 = (Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899 *)il2cpp_codegen_object_new(Func_2_tE559D891A0F422172E928B8B87F3CEB25308B899_il2cpp_TypeInfo_var);
		Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641(L_2, __this, (intptr_t)((intptr_t)TurnBasedMatchesResponse_U3CCompletedMatchesU3Eb__9_0_m3C572C1215A193FBF99B73E6A008A0E90AAEA7A4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mAC5429D05C906B5342F49FFECB46126C6C00C641_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347(L_1, L_2, /*hidden argument*/PInvokeUtilities_ToEnumerable_TisNativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_m8B46139356F391D50DE46E2743F5C154A4A62347_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::CompletedMatchesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnBasedMatchesResponse_CompletedMatchesCount_m039FF8DFFC6A23E90A498AA57ED6B15EA0AA864F (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, const RuntimeMethod* method)
{
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UIntPtr ptr =
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length(SelfPtr());
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1;
		L_1 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length_m80B0A6D7CD2EF8829F68CF2A384AD25A45F182C8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return (int)ptr.ToUInt32();
		uint32_t L_2;
		L_2 = UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC((uintptr_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::FromPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * TurnBasedMatchesResponse_FromPointer_m914659CD404B50EEA7DB2F649E354F97F24BB933 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PInvokeUtilities.IsNull(pointer))
		intptr_t L_0 = ___pointer0;
		IL2CPP_RUNTIME_CLASS_INIT(PInvokeUtilities_t93061B91AF5AFBD6484E757D35DE9A3CE884CE61_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PInvokeUtilities_IsNull_m5C2ACDF8DF51EE0F59AF4939FACFC48CE6A5DE77((intptr_t)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 *)NULL;
	}

IL_000a:
	{
		// return new TurnBasedMatchesResponse(pointer);
		intptr_t L_2 = ___pointer0;
		TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * L_3 = (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 *)il2cpp_codegen_object_new(TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7_il2cpp_TypeInfo_var);
		TurnBasedMatchesResponse__ctor_mECEABDE58D55F392281774FF5AC126F88E40BFF2(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::<Invitations>b__3_0(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F * TurnBasedMatchesResponse_U3CInvitationsU3Eb__3_0_mD9B495562D706B69C60E0073A67DEABD90A116C7 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index => new MultiplayerInvitation(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1 = ___index0;
		intptr_t L_2;
		L_2 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement_m187372E854AFC6E1E1C5274EE755E369A919344C(L_0, L_1, /*hidden argument*/NULL);
		MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F * L_3 = (MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F *)il2cpp_codegen_object_new(MultiplayerInvitation_tFE84905925B11AF6767CAFEDA47C2BD5DDE2A26F_il2cpp_TypeInfo_var);
		MultiplayerInvitation__ctor_m640001D0ADB2E2334955EFC2FB2DBE8F4EAA6F13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::<MyTurnMatches>b__5_0(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * TurnBasedMatchesResponse_U3CMyTurnMatchesU3Eb__5_0_m27807EE08D7A1C742A77BB7F79D2F561080328D9 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index => new NativeTurnBasedMatch(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1 = ___index0;
		intptr_t L_2;
		L_2 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement_mE7A7A56993E9D3584B83BA05A211551C839452C1(L_0, L_1, /*hidden argument*/NULL);
		NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * L_3 = (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 *)il2cpp_codegen_object_new(NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		NativeTurnBasedMatch__ctor_mEF33063B321A44B2C64AF812CBA332018518DD13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::<TheirTurnMatches>b__7_0(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * TurnBasedMatchesResponse_U3CTheirTurnMatchesU3Eb__7_0_m9E451CCC3EAAAD64CAF794BABA1DD8137D1592CE (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index => new NativeTurnBasedMatch(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1 = ___index0;
		intptr_t L_2;
		L_2 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement_mB9B04DDB8F7A69FC83832DC30C9B3285F7670B19(L_0, L_1, /*hidden argument*/NULL);
		NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * L_3 = (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 *)il2cpp_codegen_object_new(NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		NativeTurnBasedMatch__ctor_mEF33063B321A44B2C64AF812CBA332018518DD13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse::<CompletedMatches>b__9_0(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * TurnBasedMatchesResponse_U3CCompletedMatchesU3Eb__9_0_m3C572C1215A193FBF99B73E6A008A0E90AAEA7A4 (TurnBasedMatchesResponse_tCF931EF55FF917A342BB9A044ECCCA4A9D64C4C7 * __this, uintptr_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index => new NativeTurnBasedMatch(
		//     TurnBasedMultiplayerManager.TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement(SelfPtr(), index)));
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0;
		L_0 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(__this, /*hidden argument*/NULL);
		uintptr_t L_1 = ___index0;
		intptr_t L_2;
		L_2 = TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement_m28BD5E7ADDF0DB46E9999391BBA70894D8C374B0(L_0, L_1, /*hidden argument*/NULL);
		NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 * L_3 = (NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1 *)il2cpp_codegen_object_new(NativeTurnBasedMatch_t668D2546EFA0E65F892C9D01759F5CA497F671E1_il2cpp_TypeInfo_var);
		NativeTurnBasedMatch__ctor_mEF33063B321A44B2C64AF812CBA332018518DD13(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1659A4D315BAA55838A58FB78E43E1DA761090AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 * L_0 = (U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 *)il2cpp_codegen_object_new(U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m31905D7BBDAF533E5723A8EE990237C7C4DE1E10(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31905D7BBDAF533E5723A8EE990237C7C4DE1E10 (U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/<>c::<ToString>b__48_0(GooglePlayGames.BasicApi.Multiplayer.Participant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__48_0_m6633D4F7744CE2456EBC6A37C26377D258DE8FAC (U3CU3Ec_t64D703FE418B834A0CDE007CFC2708DB469C2B05 * __this, Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mParticipants.Select(p => p.ToString()).ToArray()),
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m3134E9D0FACE008098074955E4115D905F2893CF (U3CU3Ec__DisplayClass1_0_t8ECF11EEC29061F20CD16AC584BF18523A32F314 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UIntPtr GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig/<>c__DisplayClass1_0::<PlayerIdAtIndex>b__0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass1_0_U3CPlayerIdAtIndexU3Eb__0_m8C3092E195967A0CE61EBB42B16001D0372E6335 (U3CU3Ec__DisplayClass1_0_t8ECF11EEC29061F20CD16AC584BF18523A32F314 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___out_string0, uintptr_t ___size1, const RuntimeMethod* method)
{
	{
		// (out_string, size) => C.TurnBasedMatchConfig_PlayerIdsToInvite_GetElement(
		//     SelfPtr(), index, out_string, size));
		TurnBasedMatchConfig_t933F7F5402EED63C21EF0FA069DBE9319C0C45CA * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = BaseReferenceHolder_SelfPtr_m0D42DD66F4FA179931A28748F9753485F6F9F4C5(L_0, /*hidden argument*/NULL);
		uintptr_t L_2 = __this->get_index_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___out_string0;
		uintptr_t L_4 = ___size1;
		uintptr_t L_5;
		L_5 = TurnBasedMatchConfig_TurnBasedMatchConfig_PlayerIdsToInvite_GetElement_mEB96ED24D46DCF3983E911694E754F2C0A391D38(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F (MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchInboxUICallback__ctor_m6FDC186BF91A7E84A8F53A9F8601793B5C781367 (MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchInboxUICallback_Invoke_mCFD3272E0C20A7F5894C0AA0859D43D6AE05DDEC (MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MatchInboxUICallback_BeginInvoke_m4AEBDA2BF4C24BD44AAAF08BCAD0F051CD3D806E (MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchInboxUICallback_EndInvoke_m9240FD3910A4697A05E7955BDD0F92CD8BA6B2F0 (MatchInboxUICallback_tAA8FE4893F70625D5CA508B4B656E57DEBCEAB5F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245 (MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245 * __this, int32_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerStatusCallback__ctor_m3A2B3DE1710FA2B9A956F7BDB3803D4843D3AAB8 (MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerStatusCallback_Invoke_mE7E6F86CF27BA6017C87643318B54DEB8571893B (MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245 * __this, int32_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiplayerStatusCallback_BeginInvoke_mA17D5AAA69692FD89BD5D62DD33D05DE9935F682 (MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245 * __this, int32_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplayerStatus_tDE792785955C8660103E4CC6558337F31A30E726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(MultiplayerStatus_tDE792785955C8660103E4CC6558337F31A30E726_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplayerStatusCallback_EndInvoke_m2B58E02B458E3D75788E950686E178A2559CF351 (MultiplayerStatusCallback_tA9FBE12861381BDB7BB8DDD91E9F3792F1629245 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D (PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSelectUICallback__ctor_mDBDAA80F1CBD56C871D596226FC3B294D3F4D33C (PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSelectUICallback_Invoke_m0C56436729495533C3433D844063A762C063C7B8 (PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerSelectUICallback_BeginInvoke_m585F5E763C961D65B00585A87B51F29683D151E8 (PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSelectUICallback_EndInvoke_mBD666502C38620BA38E8C701B874E739D1E30B5C (PlayerSelectUICallback_tAFAD05428C570EA647F8EC41272B5165FF509E6D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73 (TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchCallback__ctor_m0BE681D8948A5769C8F82B1847A101F9FDB27268 (TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchCallback_Invoke_m26143333545C1855DCE0F1B521E98052DE9BF88B (TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnBasedMatchCallback_BeginInvoke_m3A92A1C1660EBD6E64D625441AE064F34EEAC64C (TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchCallback_EndInvoke_m5DEF3DB6D120BD9008754CDA15D1CB2D759844AF (TurnBasedMatchCallback_t0E7A88FD8B3018A4A6BC0E7AF9F3F442BB708E73 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE (TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchesCallback__ctor_mDECCDC6FD566C84F63C6FA3ECAE576A18D9771A2 (TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchesCallback_Invoke_m00D905CF2B61E2B910C12528C56BF90A5415A771 (TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnBasedMatchesCallback_BeginInvoke_m3EDD478CADD7C03EDA3FAE35509952255531E80D (TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnBasedMatchesCallback_EndInvoke_mCE265936384B2A55A1FA06B8726B276F34100554 (TurnBasedMatchesCallback_t200A06631CC27873FAA4942C350CA075646317EE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m683C32BBAC83669BA2265894634CEAE70C4A6614 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * L_0 = (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 *)il2cpp_codegen_object_new(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_0_m45C8B082FF31EE226F60B7F07B8766144F9CDD0A (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_1_m3115B8DF5C3E736775205FD2203ACF06FBD6626B (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453 (CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/CaptureCapabilitiesCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureCapabilitiesCallback__ctor_m9AB8A35B8579F473ECFD193734B9CF7976A3D612 (CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/CaptureCapabilitiesCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureCapabilitiesCallback_Invoke_m58B5102B54C8B4CF5C6B54BF6665DD551ADBC971 (CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453 * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.VideoManager/CaptureCapabilitiesCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureCapabilitiesCallback_BeginInvoke_m59C7C74442C10405905036153805DE9C9913D453 (CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453 * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/CaptureCapabilitiesCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureCapabilitiesCallback_EndInvoke_m19D3A7EC5BE470C6780E1A43D78AA0D44724302A (CaptureCapabilitiesCallback_tAF62265FB93011B6C0557E72893B144BAEEC3453 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF (CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/CaptureStateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureStateCallback__ctor_mC6EF9669AEEA7F9BCC613FC10BDBC3EC1B49F42B (CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/CaptureStateCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureStateCallback_Invoke_m6289A8A34B9B8165215C3B245784290BC59E3665 (CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.VideoManager/CaptureStateCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureStateCallback_BeginInvoke_mD4B4A9ED907F4251D1DD326C3676117B46F4532E (CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/CaptureStateCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureStateCallback_EndInvoke_m4518B24EC09BDF30682902C339D4D3BE3EC5D493 (CaptureStateCallback_tFC6EEC502B33DC54D1572BEE90928D248D9608EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA (IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11);

}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/IsCaptureAvailableCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsCaptureAvailableCallback__ctor_m5D91589487873BB14C80593D2D994F49A97ABE3A (IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/IsCaptureAvailableCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsCaptureAvailableCallback_Invoke_mF23C3679CA43F550A5E281B8DE3D655EE8FDF90B (IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA * __this, intptr_t ___arg00, intptr_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.VideoManager/IsCaptureAvailableCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsCaptureAvailableCallback_BeginInvoke_mFB3AF01EA5B6241F9405EE9DC9FBC28A1199430D (IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA * __this, intptr_t ___arg00, intptr_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GooglePlayGames.Native.Cwrapper.VideoManager/IsCaptureAvailableCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsCaptureAvailableCallback_EndInvoke_m7B75E13610C444BA9DC7FF62943C1917DF6D3C0D (IsCaptureAvailableCallback_t55780152057E387574970B129E9C441BDBFA5AEA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void boss/<shooting>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootingU3Ed__4__ctor_m4AB282BFD0A5E3884DFB161A8825981F8F5682EF (U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void boss/<shooting>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootingU3Ed__4_System_IDisposable_Dispose_mC61B413B39898A38173D070B91DA77B2E84A86EE (U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean boss/<shooting>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CshootingU3Ed__4_MoveNext_mE6FDC436B929D9F8AEF488FF3FEA5E560D27ACE9 (U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(5);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// shoot();
		boss_t7103983475D183857493FCA2A27B2EE9F5FB1906 * L_5 = V_1;
		NullCheck(L_5);
		boss_shoot_m31D807C49CD55E9BDAFB1FC949E6DB8A07433E93(L_5, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object boss/<shooting>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CshootingU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA58C1E3FC0D20559D01D28112B6A52CB268CF52 (U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void boss/<shooting>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootingU3Ed__4_System_Collections_IEnumerator_Reset_m1F65184A69288977A19CC0CB74C587670B67FAE4 (U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CshootingU3Ed__4_System_Collections_IEnumerator_Reset_m1F65184A69288977A19CC0CB74C587670B67FAE4_RuntimeMethod_var)));
	}
}
// System.Object boss/<shooting>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CshootingU3Ed__4_System_Collections_IEnumerator_get_Current_mB8ED2E4A5CC1113CE1554D8D48A882C123AADAAF (U3CshootingU3Ed__4_t6DC0820413867F0F0233355C56B5E4E0A812BA81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCE3A83E011C441A9EA7679C310D04C66A38B3815 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 * L_0 = (U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 *)il2cpp_codegen_object_new(U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC1DA66A5CA4C4BC4C1EFD3EEC25CF22E5C72B460(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1DA66A5CA4C4BC4C1EFD3EEC25CF22E5C72B460 (U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// GooglePlayGames.Native.PInvoke.NativeEvent GooglePlayGames.Native.PInvoke.EventManager/FetchAllResponse/<>c::<Data>b__2_1(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE * U3CU3Ec_U3CDataU3Eb__2_1_m80EB3663245CC44A4889068EF5C6587D87ACA5AD (U3CU3Ec_t426F4C51690B90F4FB426933BFC54FAE8FB2A444 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return events.Select(ptr => new NativeEvent(ptr)).ToList();
		intptr_t L_0 = ___ptr0;
		NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE * L_1 = (NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE *)il2cpp_codegen_object_new(NativeEvent_t997BAC595365D1C46AB8D066CFDFCF53450C6CDE_il2cpp_TypeInfo_var);
		NativeEvent__ctor_mAA555A0FB53C3B3AF7687064A12524BCFD8BBB0C(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5F4020206197EF77BD5EA3FF92D229BA8FA6537C (U3CU3Ec__DisplayClass2_0_t65D5D41A50C684991EE67BBA176E19FAE7D85D14 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<OnEndpointFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnEndpointFoundU3Eb__0_mF038A9A8B2A063398007F91F4965EC3E2DF9D4D1 (U3CU3Ec__DisplayClass2_0_t65D5D41A50C684991EE67BBA176E19FAE7D85D14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnEndpointFound(discoveredEndpoint));
		OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  L_2 = __this->get_discoveredEndpoint_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointFound(GooglePlayGames.BasicApi.Nearby.EndpointDetails) */, IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD47620352F2A06A03E3B55BF144EB0E544A3F220 (U3CU3Ec__DisplayClass3_0_tBE4F5F9DE66A803437D8CEDDA8B4CABCC66E3016 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<OnEndpointLost>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnEndpointLostU3Eb__0_mDF6573C51036478F7563285FA46F000FDD4109D8 (U3CU3Ec__DisplayClass3_0_tBE4F5F9DE66A803437D8CEDDA8B4CABCC66E3016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnEndpointLost(lostEndpointId));
		OnGameThreadDiscoveryListener_tE542C19876719679E53CF486EB6D0E0DAC1741FD * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_lostEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointLost(System.String) */, IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mEFA94E98261105DC03FFB75F9EC42FFB6381158E (U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<OnMessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnMessageReceivedU3Eb__0_m34D190E85CD6B55A4AA14FA035E34C84735E6CBF (U3CU3Ec__DisplayClass2_0_t0913248F9A38587D7E2DCAF0B3B73ADCA5B884F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnMessageReceived(
		//         remoteEndpointId, data, isReliableMessage));
		OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_data_2();
		bool L_4 = __this->get_isReliableMessage_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnMessageReceived(System.String,System.Byte[],System.Boolean) */, IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m70296018D87165F2D184D87D12CA025387007C8C (U3CU3Ec__DisplayClass3_0_t3A4763BA528AE4FB97535E587FF1763896FAC7AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeNearbyConnectionsClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<OnRemoteEndpointDisconnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnRemoteEndpointDisconnectedU3Eb__0_m0B2EDCC73A70267AFE5BDE6F0F17022CDC79C7FD (U3CU3Ec__DisplayClass3_0_t3A4763BA528AE4FB97535E587FF1763896FAC7AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnRemoteEndpointDisconnected(remoteEndpointId));
		OnGameThreadMessageListener_t0E6C3D7C13AFE1C299D7DAA5554D4C4FC51B62E2 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnRemoteEndpointDisconnected(System.String) */, IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m48A507680406F67AEE23E5B56DFF32A26F81189C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * L_0 = (U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 *)il2cpp_codegen_object_new(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m72878B0CA137B81ACEFFBA4DBA0EF92B36D8B16A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m72878B0CA137B81ACEFFBA4DBA0EF92B36D8B16A (U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<HandleConnectedSetChanged>b__5_0(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CHandleConnectedSetChangedU3Eb__5_0_mE832B9FF0205C9AFE5D8C2BA09A5417B72685219 (U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * __this, MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * ___p0, const RuntimeMethod* method)
{
	{
		// var updatedParticipants = room.Participants().ToDictionary(p => p.Id());
		MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MultiplayerParticipant_Id_m65FFD8416E70F6E7A4D11974B7F5B1AA26A55D8F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<HandleConnectedSetChanged>b__5_1(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * U3CU3Ec_U3CHandleConnectedSetChangedU3Eb__5_1_m1C569EEAE2636B0B839D04CB9EF7E905F2F66EAE (U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * __this, MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * ___p0, const RuntimeMethod* method)
{
	{
		// .Select(p => p.AsParticipant())
		MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * L_0 = ___p0;
		NullCheck(L_0);
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_1;
		L_1 = MultiplayerParticipant_AsParticipant_m5C96E5555DA9D523AD0BA11363557B23770D7FE4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<HandleConnectedSetChanged>b__5_2(GooglePlayGames.BasicApi.Multiplayer.Participant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CHandleConnectedSetChangedU3Eb__5_2_m09F5E1D291F864195680386021A1D9BA8E44F412 (U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * __this, Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * ___p0, const RuntimeMethod* method)
{
	{
		// .ToDictionary(p => p.ParticipantId);
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Participant_get_ParticipantId_m3D2815850CE5CB039AC535389DC7C9C012C88CBB_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c::<HandleConnectedSetChanged>b__5_3(GooglePlayGames.BasicApi.Multiplayer.Participant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CHandleConnectedSetChangedU3Eb__5_3_m0BB0F41B8F889284416B82FC2193746F450019BC (U3CU3Ec_t6E7D20C11E038C434587E103D3968C203AB095C2 * __this, Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mParticipants.Values.Select(p => p.ToString()).ToArray()));
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mDBB53E1CB4AE69E6F389A9F4DB62084C676AB277 (U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0::<HandleConnectedSetChanged>b__4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CHandleConnectedSetChangedU3Eb__4_mD47DDE4F04042439264FC154C9E43674A309E1F2 (U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7 * __this, String_t* ___peerId0, const RuntimeMethod* method)
{
	{
		// newlyConnected = newlyConnected.Where(peerId => !peerId.Equals(selfId)).ToList();
		String_t* L_0 = ___peerId0;
		String_t* L_1 = __this->get_selfId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0::<HandleConnectedSetChanged>b__5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CHandleConnectedSetChangedU3Eb__5_m7CD2BF515D31E407E4AF9B8C77E1A5D110A7207E (U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7 * __this, String_t* ___peerId0, const RuntimeMethod* method)
{
	{
		// newlyLeft = newlyLeft.Where(peerId => !peerId.Equals(selfId)).ToList();
		String_t* L_0 = ___peerId0;
		String_t* L_1 = __this->get_selfId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0::<HandleConnectedSetChanged>b__6(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CHandleConnectedSetChangedU3Eb__6_mCCBAFAE9B20AD1A9017A95B4FCDB62AD1531DF5A (U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7 * __this, String_t* ___peer0, const RuntimeMethod* method)
{
	{
		// .PeersConnected(newlyConnected.Where(peer => !peer.Equals(selfId)).ToArray());
		String_t* L_0 = ___peer0;
		String_t* L_1 = __this->get_selfId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState/<>c__DisplayClass5_0::<HandleConnectedSetChanged>b__7(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CHandleConnectedSetChangedU3Eb__7_m40DC0704DA6589814E1D81EEA38ABFA3E93C24C1 (U3CU3Ec__DisplayClass5_0_tA6972EE32BF6345379BF8D94EF5E6D7635F2EFA7 * __this, String_t* ___peer0, const RuntimeMethod* method)
{
	{
		// .PeersDisconnected(newlyLeft.Where(peer => !peer.Equals(selfId)).ToArray());
		String_t* L_0 = ___peer0;
		String_t* L_1 = __this->get_selfId_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF06E74DFC0FE8F65DDE0A8896C9F52D733C8754B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * L_0 = (U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 *)il2cpp_codegen_object_new(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8BE70155771D6D5599B823BE271816DBC69B4947(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8BE70155771D6D5599B823BE271816DBC69B4947 (U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<UpdateCurrentRoom>b__5_0(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CUpdateCurrentRoomU3Eb__5_0_m86DAFEE6B8F34CD1A5BC977068D56B2DF40F3221 (U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * __this, MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * ___p0, const RuntimeMethod* method)
{
	{
		// mNativeParticipants = mRoom.Participants().ToDictionary(p => p.Id());
		MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MultiplayerParticipant_Id_m65FFD8416E70F6E7A4D11974B7F5B1AA26A55D8F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<UpdateCurrentRoom>b__5_1(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * U3CU3Ec_U3CUpdateCurrentRoomU3Eb__5_1_m61C7B9EA0A5AB5F120FD39E3E15DEE1E62EB91D7 (U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * __this, MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * ___p0, const RuntimeMethod* method)
{
	{
		// .Select(p => p.AsParticipant())
		MultiplayerParticipant_t138A60B1AAA5EEE4D7E6FA1CEB37D7B00732F5E4 * L_0 = ___p0;
		NullCheck(L_0);
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_1;
		L_1 = MultiplayerParticipant_AsParticipant_m5C96E5555DA9D523AD0BA11363557B23770D7FE4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<UpdateCurrentRoom>b__5_2(GooglePlayGames.BasicApi.Multiplayer.Participant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CUpdateCurrentRoomU3Eb__5_2_m701A58F6DAD6D3EEBE51624EABF544C7D2BD19C0 (U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * __this, Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * ___p0, const RuntimeMethod* method)
{
	{
		// .ToDictionary(p => p.ParticipantId);
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Participant_get_ParticipantId_m3D2815850CE5CB039AC535389DC7C9C012C88CBB_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState/<>c::<GetConnectedParticipants>b__12_0(GooglePlayGames.BasicApi.Multiplayer.Participant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetConnectedParticipantsU3Eb__12_0_m931EE791CE393ABA1EA6C7051105B0D337C6F533 (U3CU3Ec_t356A6498B773D3E583B4E97AAC98D3C4FA127E49 * __this, Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * ___p0, const RuntimeMethod* method)
{
	{
		// .Where(p => p.IsConnectedToRoom)
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_0 = ___p0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Participant_get_IsConnectedToRoom_mF8600F5623D997A3E833A3E7142D55A7B6CF8722_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m9531D1F12B8EAE1378FBDECA648C4F06C4F46B60 (U3CU3Ec__DisplayClass2_0_t5D1E69E8395542121999650A2DEE11C84062A8BD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass2_0::<RoomSetupProgress>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CRoomSetupProgressU3Eb__0_m4DDDBD40AD8D95E903006F54B529DF6925D9ABD5 (U3CU3Ec__DisplayClass2_0_t5D1E69E8395542121999650A2DEE11C84062A8BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnRoomSetupProgress(percent));
		OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		float L_2 = __this->get_percent_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener::OnRoomSetupProgress(System.Single) */, RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m19B735A7310FB7A12C90634DEEF68358EECCFDF9 (U3CU3Ec__DisplayClass3_0_t21B56017690F5809565D6361C48694F8CFA0BEB5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass3_0::<RoomConnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CRoomConnectedU3Eb__0_m5E00983ABF3B7E6A2FC31E4D15B96F0B0820DF22 (U3CU3Ec__DisplayClass3_0_t21B56017690F5809565D6361C48694F8CFA0BEB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnRoomConnected(success));
		OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		bool L_2 = __this->get_success_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener::OnRoomConnected(System.Boolean) */, RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m3CAF38427E73EDE9EDCB5A2B395184DADF26F828 (U3CU3Ec__DisplayClass5_0_tE4B210448755C8C7D477A13AD38A112AAC65AA17 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass5_0::<PeersConnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CPeersConnectedU3Eb__0_mCF1DAACFD4AE9C401C0AA3919767B167B17B62F3 (U3CU3Ec__DisplayClass5_0_tE4B210448755C8C7D477A13AD38A112AAC65AA17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnPeersConnected(participantIds));
		OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_participantIds_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(4 /* System.Void GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener::OnPeersConnected(System.String[]) */, RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m4AB4CE56A76E0AD743E710C172E9A08F178E0311 (U3CU3Ec__DisplayClass6_0_t0220C985B53590B609F481FBBD1A6DFDCEFACFD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass6_0::<PeersDisconnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CPeersDisconnectedU3Eb__0_m0A405A8DD3C9A63C8ABBB2E8003EC879D908B59E (U3CU3Ec__DisplayClass6_0_t0220C985B53590B609F481FBBD1A6DFDCEFACFD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnPeersDisconnected(participantIds));
		OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_participantIds_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(5 /* System.Void GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener::OnPeersDisconnected(System.String[]) */, RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mB986C46319E9E1C0D64C42BCA983DF5A4BF6F711 (U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass7_0::<RealTimeMessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRealTimeMessageReceivedU3Eb__0_mA526ED81B7C0000305365C53FF7CF0B86F764C0A (U3CU3Ec__DisplayClass7_0_tF1F8996979150C877C20C501FAB515D853B66374 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnRealTimeMessageReceived(isReliable, senderId, data));
		OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		bool L_2 = __this->get_isReliable_1();
		String_t* L_3 = __this->get_senderId_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_data_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< bool, String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Void GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener::OnRealTimeMessageReceived(System.Boolean,System.String,System.Byte[]) */, RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m8A3525A7EAB93E342A5ABD5F59D99A4E805BD741 (U3CU3Ec__DisplayClass8_0_t0B5515E2615570601EF96EF4ECAD817A71B51D4C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<>c__DisplayClass8_0::<ParticipantLeft>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CParticipantLeftU3Eb__0_m47E1E1E2914CC2B0FF61F939002BAE1597A58E54 (U3CU3Ec__DisplayClass8_0_t0B5515E2615570601EF96EF4ECAD817A71B51D4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnParticipantLeft(participant));
		OnGameThreadForwardingListener_t55496EC1AD52BD1FE0DC5744C33F487BCC3ED7FC * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * L_2 = __this->get_participant_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * >::Invoke(3 /* System.Void GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener::OnParticipantLeft(GooglePlayGames.BasicApi.Multiplayer.Participant) */, RealTimeMultiplayerListener_tC9AB37C9142FF37B8795C9CF541F98954012C26A_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m006EF9E4C2CCA8EA9D6496AC3AFF02732B58AC49 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * L_0 = (U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 *)il2cpp_codegen_object_new(U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCD649656BAD9522AE4E4414EF3F41F58044D12D2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD649656BAD9522AE4E4414EF3F41F58044D12D2 (U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::<OnOriginalDataRead>b__8_0(GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnOriginalDataReadU3Eb__8_0_m70DA7F202DA2B9F087FA3F0D8B561DE817C18CA0 (U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * __this, int32_t ___U3Cp0U3E0, RuntimeObject* ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// };
		return;
	}
}
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher/<>c::<OnUnmergedDataRead>b__9_0(GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnUnmergedDataReadU3Eb__9_0_mCBAD63A9026DBDB17C6ACD9B9985D41E9B1D53F4 (U3CU3Ec_tE36894E40A291C814F5A9C17F59188F75FCA3676 * __this, int32_t ___U3Cp0U3E0, RuntimeObject* ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m14F7404A4F927C3D8991AE900088C118F78D1C8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * L_0 = (U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E *)il2cpp_codegen_object_new(U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7531B2CA89B7A7ED3BC5011B77CEFA79DB350AA0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7531B2CA89B7A7ED3BC5011B77CEFA79DB350AA0 (U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::<.ctor>b__30_0(GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__30_0_m9D314D318674FA8D0CBA65C20FE0253D18352989 (U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * __this, Invitation_t8B66873D2FC6F8FE9C7157200382642107DA9F3F * ___U3Cp0U3E0, bool ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// };
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder/<>c::<.ctor>b__30_1(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__30_1_mD2F67C8F590BCF176D1FE05AAF6EE4C4088365D5 (U3CU3Ec_t5ACADB9769B55EAF27A5B283E8F2D4834FB1718E * __this, TurnBasedMatch_t20DB9014B2A704F4D95F019D8006DE0BE45B727D * ___U3Cp0U3E0, bool ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m9B1156AA75A22DE0DE0961CE0D97D7DCE1154F46_inline (PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4 * __this, const RuntimeMethod* method)
{
	{
		// return mAvatarUrl;
		String_t* L_0 = __this->get_mAvatarUrl_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Participant_get_ParticipantId_m3D2815850CE5CB039AC535389DC7C9C012C88CBB_inline (Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * __this, const RuntimeMethod* method)
{
	{
		// return mParticipantId;
		String_t* L_0 = __this->get_mParticipantId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Participant_get_IsConnectedToRoom_mF8600F5623D997A3E833A3E7142D55A7B6CF8722_inline (Participant_t5728682B24DC03D80C1CF1824E80DFAADEF6CB8B * __this, const RuntimeMethod* method)
{
	{
		// return mIsConnectedToRoom;
		bool L_0 = __this->get_mIsConnectedToRoom_4();
		return L_0;
	}
}
