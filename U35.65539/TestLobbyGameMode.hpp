#ifndef UE4SS_SDK_TestLobbyGameMode_HPP
#define UE4SS_SDK_TestLobbyGameMode_HPP

class ATestLobbyGameMode_C : UGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;

    void OnFailure_CAB842EC41BAFB8B6D6C0595A9F96FB4();
    void OnSuccess_CAB842EC41BAFB8B6D6C0595A9F96FB4();
    void Join Session(FBlueprintSessionResult Session Result);
    void ExecuteUbergraph_TestLobbyGameMode(int32 EntryPoint, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FBlueprintSessionResult K2Node_CustomEvent_Session_Result, UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
