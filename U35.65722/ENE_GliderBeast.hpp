#ifndef UE4SS_SDK_ENE_GliderBeast_HPP
#define UE4SS_SDK_ENE_GliderBeast_HPP

class AENE_GliderBeast_C : public AFlyingEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GliderBeastDeath_Cue;
    class UAudioComponent* GliderBeastGrabOneShotScream;
    class UAudioComponent* GliderBeastIdleScream;
    class UAudioComponent* GliderBeastAttachScream;
    class UAIPlayerControlComponent* AIPlayerControl;
    class USphereComponent* Sphere;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    FTimerHandle AudioScreamHandle;
    bool IsControlledByPlayer;
    bool LastScreamForced;
    class UAudioComponent* LastPlayedScream;
    class UAudioComponent* NewVar_0;

    void PlayScream(class UAudioComponent* ForcedScream, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* K2Node_Select_Default, class UAudioComponent* K2Node_Select_Default_1);
    void OnNotifyEnd_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnNotifyBegin_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnInterrupted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnBlendOut_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnCompleted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    void ScreamUpdate();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_GliderBeast(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_3, FExecuteUbergraph_ENE_GliderBeastK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, FExecuteUbergraph_ENE_GliderBeastK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, FExecuteUbergraph_ENE_GliderBeastK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, FExecuteUbergraph_ENE_GliderBeastK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, FExecuteUbergraph_ENE_GliderBeastK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool K2Node_Event_IsControlled, bool K2Node_Event_IsLocallyControlled, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, FExecuteUbergraph_ENE_GliderBeastK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
};

#endif
