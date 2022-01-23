#ifndef UE4SS_SDK_ENE_Bomber_HPP
#define UE4SS_SDK_ENE_Bomber_HPP

class AENE_Bomber_C : public ABomber
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDashPoints* DashPoints;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UParticleSystemComponent* ParticleSystem;
    int32 Dashes;
    TEnumAsByte<MacteraDeathTypes::Type> DeathType;

    void OnRep_DeathType();
    void InitCharge(int32 CallFunc_RandomIntegerInRange_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void OnStartDeathPanic();
    void OnFrozen(class AActor* Source);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_ENE_Bomber(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FName K2Node_ComponentBoundEvent_name, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, class AActor* K2Node_Event_source, class AFSDAIController* CallFunc_GetFSDAIController_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
};

#endif
