#ifndef UE4SS_SDK_ENE_Spider_Exploding_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Exploding_Radioactive_HPP

class AENE_Spider_Exploding_Radioactive_C : UENE_Spider_Exploding_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<AActor> PostExplosionCloudClass;

    void DamageAndCarve();
    void ExecuteUbergraph_ENE_Spider_Exploding_Radioactive(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
