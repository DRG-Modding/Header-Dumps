#ifndef UE4SS_SDK_BP_Collectible_Barley_B2_HPP
#define UE4SS_SDK_BP_Collectible_Barley_B2_HPP

class ABP_Collectible_Barley_B2_C : UBP_Collectible_Barley_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    UStaticMeshComponent* Fruit2;
    UStaticMeshComponent* Stem2;
    UStaticMeshComponent* Fruit1;
    UStaticMeshComponent* Stem1;
    float Timeline_1_NewCurveBase_3E1FA8E34B81F0D665577BA1BED94342;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3E1FA8E34B81F0D665577BA1BED94342;
    UTimelineComponent* Timeline_1;
    float Timeline_0_NewCurveBase_CE04641D46E6DB9696536A9342C5DBD1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CE04641D46E6DB9696536A9342C5DBD1;
    UTimelineComponent* Timeline_0;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Barley_B2(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_GetPickDelay_ReturnValue);
}

#endif
