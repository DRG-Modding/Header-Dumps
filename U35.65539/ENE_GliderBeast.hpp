#ifndef UE4SS_SDK_ENE_GliderBeast_HPP
#define UE4SS_SDK_ENE_GliderBeast_HPP

class AENE_GliderBeast_C : UFlyingEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* GliderBeastDeath_Cue;
    UAudioComponent* GliderBeastGrabOneShotScream;
    UAudioComponent* GliderBeastIdleScream;
    UAudioComponent* GliderBeastAttachScream;
    UAIPlayerControlComponent* AIPlayerControl;
    USphereComponent* Sphere;
    UEnemyComponent* enemy;
    UOutlineComponent* outline;
    FTimerHandle AudioScreamHandle;
    bool IsControlledByPlayer;
    bool LastScreamForced;
    UAudioComponent* LastPlayedScream;
    UAudioComponent* NewVar_0;

    void PlayScream(UAudioComponent* ForcedScream, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_2, UAudioComponent* K2Node_Select_Default, UAudioComponent* K2Node_Select_Default_1);
    void OnNotifyEnd_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnNotifyBegin_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnInterrupted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnBlendOut_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnCompleted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    void ScreamUpdate();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_GliderBeast(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool K2Node_Event_IsControlled, bool K2Node_Event_IsLocallyControlled, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
}

#endif
