#ifndef UE4SS_SDK_BP_Collectible_Barley_B4_HPP
#define UE4SS_SDK_BP_Collectible_Barley_B4_HPP

class ABP_Collectible_Barley_B4_C : public ABP_Collectible_Barley_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Fruit4;
    class UStaticMeshComponent* Stem4;
    class UStaticMeshComponent* Fruit3;
    class UStaticMeshComponent* Stem3;
    class UStaticMeshComponent* Fruit2;
    class UStaticMeshComponent* Stem2;
    class UStaticMeshComponent* Fruit1;
    class UStaticMeshComponent* Stem1;
    float Timeline_3_NewCurveBase_F2EAE79A48FEF78FA29C98A2B8B2415B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_F2EAE79A48FEF78FA29C98A2B8B2415B;
    class UTimelineComponent* Timeline_3;
    float Timeline_2_NewCurveBase_9EB4F50B457A613DE634CDA4A4D41FE0;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_9EB4F50B457A613DE634CDA4A4D41FE0;
    class UTimelineComponent* Timeline_2;
    float Timeline_1_NewCurveBase_7B9675034F5062F142FD908FD2344343;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_7B9675034F5062F142FD908FD2344343;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewCurveBase_0AC282ED4312AED5464F70ACB4C3BD8F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0AC282ED4312AED5464F70ACB4C3BD8F;
    class UTimelineComponent* Timeline_0;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Barley_B4(int32 EntryPoint);
};

#endif
