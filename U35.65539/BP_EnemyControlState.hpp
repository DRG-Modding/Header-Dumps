#ifndef UE4SS_SDK_BP_EnemyControlState_HPP
#define UE4SS_SDK_BP_EnemyControlState_HPP

class UBP_EnemyControlState_C : UEnemyControlStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimMontage* GetOnMontage;

    void OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnControllingEnemy(bool IsControlling);
    void OnControllingEnemyAttached();
    void ExecuteUbergraph_BP_EnemyControlState(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, bool K2Node_Event_IsControlling, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAIPlayerControlComponent* CallFunc_GetAiPlayerControlComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}

#endif