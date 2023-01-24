#ifndef UE4SS_SDK_ENE_BoughWasp_Nest_Medium_HPP
#define UE4SS_SDK_ENE_BoughWasp_Nest_Medium_HPP

class AENE_BoughWasp_Nest_Medium_C : public AENE_BoughWasp_Nest_Small_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_HollowboughWaspNest_03;

    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnNestDeath();
    void ExecuteUbergraph_ENE_BoughWasp_Nest_Medium(int32 EntryPoint);
};

#endif
