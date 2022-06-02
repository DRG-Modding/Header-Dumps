#ifndef UE4SS_SDK_BP_Collectible_Barley_B2_HPP
#define UE4SS_SDK_BP_Collectible_Barley_B2_HPP

class ABP_Collectible_Barley_B2_C : public ABP_Collectible_Barley_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Fruit2;
    class UStaticMeshComponent* Stem2;
    class UStaticMeshComponent* Fruit1;
    class UStaticMeshComponent* Stem1;
    float Timeline_1_NewCurveBase_3E1FA8E34B81F0D665577BA1BED94342;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3E1FA8E34B81F0D665577BA1BED94342;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewCurveBase_CE04641D46E6DB9696536A9342C5DBD1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CE04641D46E6DB9696536A9342C5DBD1;
    class UTimelineComponent* Timeline_0;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Barley_B2(int32 EntryPoint);
};

#endif
