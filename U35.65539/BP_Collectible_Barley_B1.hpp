#ifndef UE4SS_SDK_BP_Collectible_Barley_B1_HPP
#define UE4SS_SDK_BP_Collectible_Barley_B1_HPP

class ABP_Collectible_Barley_B1_C : UBP_Collectible_Barley_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    UStaticMeshComponent* Fruit;
    UStaticMeshComponent* Stem;
    float Timeline_0_NewCurveBase_4943D24B4499D90872349BB26D0794FD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4943D24B4499D90872349BB26D0794FD;
    UTimelineComponent* Timeline_0;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Barley_B1(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue);
}

#endif
