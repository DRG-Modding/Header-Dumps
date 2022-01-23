#ifndef UE4SS_SDK_PRJ_AcidDrop_HPP
#define UE4SS_SDK_PRJ_AcidDrop_HPP

class APRJ_AcidDrop_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystem* Impact particles;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_AcidDrop(int32 EntryPoint, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, class APawn* CallFunc_GetInstigator_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BomberAcidPuddle_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
