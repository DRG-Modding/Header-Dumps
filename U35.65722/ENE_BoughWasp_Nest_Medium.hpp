#ifndef UE4SS_SDK_ENE_BoughWasp_Nest_Medium_HPP
#define UE4SS_SDK_ENE_BoughWasp_Nest_Medium_HPP

class AENE_BoughWasp_Nest_Medium_C : public AENE_BoughWasp_Nest_Small_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_HollowboughWaspNest_03;

    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnNestDeath();
    void ExecuteUbergraph_ENE_BoughWasp_Nest_Medium(int32 EntryPoint, class AActor* K2Node_Event_source, FVector CallFunc_GetSocketLocation_ReturnValue, FRotator CallFunc_GetSocketRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
};

#endif
