#ifndef UE4SS_SDK_PRJ_AcidDrop_Ice_HPP
#define UE4SS_SDK_PRJ_AcidDrop_Ice_HPP

class APRJ_AcidDrop_Ice_C : UPRJ_AcidDrop_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_AcidDrop_Ice(int32 EntryPoint, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, APawn* CallFunc_GetInstigator_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_BomberAcidPuddle_Ice_C* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
