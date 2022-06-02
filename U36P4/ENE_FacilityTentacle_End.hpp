#ifndef UE4SS_SDK_ENE_FacilityTentacle_End_HPP
#define UE4SS_SDK_ENE_FacilityTentacle_End_HPP

class AENE_FacilityTentacle_End_C : public AENE_FacilityTentacle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Base;

    void ReceivePossessed(class AController* NewController);
    void ExecuteUbergraph_ENE_FacilityTentacle_End(int32 EntryPoint);
};

#endif
