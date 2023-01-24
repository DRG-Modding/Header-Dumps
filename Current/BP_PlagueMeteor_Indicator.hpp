#ifndef UE4SS_SDK_BP_PlagueMeteor_Indicator_HPP
#define UE4SS_SDK_BP_PlagueMeteor_Indicator_HPP

class ABP_PlagueMeteor_Indicator_C : public AImpactIndicator
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* InnerIndicator1;
    class UStaticMeshComponent* OuterIndicator;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PlagueMeteor_Indicator(int32 EntryPoint);
};

#endif
