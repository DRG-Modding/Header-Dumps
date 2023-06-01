#ifndef UE4SS_SDK_ENE_Spider_Stalker_Base_HPP
#define UE4SS_SDK_ENE_Spider_Stalker_Base_HPP

class AENE_Spider_Stalker_Base_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInDangerComponent* InDanger;
    class UBP_BurrowComponent_C* BP_BurrowComponent;
    class USimpleArmorDamageComponent* SimpleArmorDamage;
    class UMaterialInterface* CamouflageMaterial;
    class UMaterialInterface* BodyMaterial;
    class UMaterialInterface* ArmorMaterial;
    class UMaterialInterface* ClawMaterial;
    float CloakCooldown;
    bool IsCloaked;

    bool GetIsTargetable();
    void UpdateAIState();
    void OnRep_IsCloaked();
    void ReceiveBeginPlay();
    void Uncloak();
    void BndEvt__ENE_Spider_Stalker_Base_HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__ENE_Spider_Stalker_Base_HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__ENE_Spider_Stalker_Base_Outline_K2Node_ComponentBoundEvent_1_OutlineChanged__DelegateSignature(EOutline InOutline);
    void BndEvt__ENE_Spider_Stalker_Base_InDanger_K2Node_ComponentBoundEvent_4_IsInDangerSig__DelegateSignature();
    void ExecuteUbergraph_ENE_Spider_Stalker_Base(int32 EntryPoint);
};

#endif
