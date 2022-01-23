#ifndef UE4SS_SDK_Grenade_IFG_HPP
#define UE4SS_SDK_Grenade_IFG_HPP

class AGrenade_IFG_C : public AITM_AOE_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    bool Stick;

    void OnRep_Stick();
    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FGearStatEntry CallFunc_FormatStatic_GearStatEntry, TSubclassOf<class ABP_Grenade_IFG_Area_Base_C> K2Node_ClassDynamicCast_AsBP_Grenade_IFG_Area_Base, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, FGearStatEntry CallFunc_FormatStatic_GearStatEntry_1, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry K2Node_MakeStruct_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue_2, FGearStatEntry K2Node_MakeStruct_GearStatEntry_1, int32 CallFunc_Array_Add_ReturnValue_3);
    void EnableWeakeningEffect();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_Grenade_IFG(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool Temp_bool_IsClosed_Variable, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess);
};

#endif
