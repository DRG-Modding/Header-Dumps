#ifndef UE4SS_SDK_BP_PlagueHeartShield_Base_HPP
#define UE4SS_SDK_BP_PlagueHeartShield_Base_HPP

class ABP_PlagueHeartShield_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    class UStaticMeshComponent* OuterPoint_5;
    class UStaticMeshComponent* OuterPoint_4;
    class UStaticMeshComponent* OuterPoint_3;
    class UStaticMeshComponent* OuterPoint_2;
    class UStaticMeshComponent* OuterPoint_1;
    class UDamageComponent* Damage;
    class UInfectionPointCleaningComponent* InfectionPointCleaning;
    class UStaticMeshComponent* Shell;
    class USceneComponent* DefaultSceneRoot;
    float GrowInnerBoils_BoilScale_CC6321444C8D21F72E6A978121093A32;
    TEnumAsByte<ETimelineDirection::Type> GrowInnerBoils__Direction_CC6321444C8D21F72E6A978121093A32;
    class UTimelineComponent* GrowInnerBoils;
    int32 Stage;
    FBP_PlagueHeartShield_Base_CCleaned Cleaned;
    void Cleaned(class ABP_PlagueHeartShield_Base_C* Shield);
    int32 ShieldID;
    FBP_PlagueHeartShield_Base_COnPointFoamed OnPointFoamed;
    void OnPointFoamed();
    FBP_PlagueHeartShield_Base_COnPointVacuumed OnPointVacuumed;
    void OnPointVacuumed();
    TArray<class UMeshComponent*> outerMeshes;
    TArray<class UStaticMeshComponent*> innerMeshes;
    FVector Inner;
    float InnerMeshStartScale;
    FBP_PlagueHeartShield_Base_COnLaserPointed OnLaserPointed;
    void OnLaserPointed();
    bool IsDead;
    FBP_PlagueHeartShield_Base_COnShieldDeath OnShieldDeath;
    void OnShieldDeath(class ABP_PlagueHeartShield_Base_C* Shield);

    class UInfectionPointCleaningComponent* GetCleaningPoints(FVector fromLocation);
    void OnRep_IsDead();
    void DestroyAttachedMeshes();
    void OnRep_Stage();
    void GrowInnerBoils__FinishedFunc();
    void GrowInnerBoils__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__BP_PlagueHeartShield_InfectionPointCleaning_K2Node_ComponentBoundEvent_0_Delegate__DelegateSignature();
    void OnStageChanged();
    void BndEvt__BP_PlagueHeartShield_InfectionPointCleaning_K2Node_ComponentBoundEvent_4_Delegate__DelegateSignature();
    void GrowInnerBoilds();
    void InitPointCleaning();
    void Cheat Kill();
    void OnDeath();
    void ExecuteUbergraph_BP_PlagueHeartShield_Base(int32 EntryPoint);
    void OnShieldDeath__DelegateSignature(class ABP_PlagueHeartShield_Base_C* Shield);
    void OnLaserPointed__DelegateSignature();
    void OnPointVacuumed__DelegateSignature();
    void OnPointFoamed__DelegateSignature();
    void Cleaned__DelegateSignature(class ABP_PlagueHeartShield_Base_C* Shield);
};

#endif
