#ifndef UE4SS_SDK_BP_Collectible_Barley_B3_HPP
#define UE4SS_SDK_BP_Collectible_Barley_B3_HPP

class ABP_Collectible_Barley_B3_C : public ABP_Collectible_Barley_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Fruit3;
    class UStaticMeshComponent* Stem3;
    class UStaticMeshComponent* Fruit2;
    class UStaticMeshComponent* Stem2;
    class UStaticMeshComponent* Fruit1;
    class UStaticMeshComponent* Stem1;
    float Timeline_2_NewCurveBase_1FDF43BE4AF07E2CE6F71CAF12F09ACD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_1FDF43BE4AF07E2CE6F71CAF12F09ACD;
    class UTimelineComponent* Timeline_2;
    float Timeline_1_NewCurveBase_7A5054814387413FA1615C9F5DFBC685;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_7A5054814387413FA1615C9F5DFBC685;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewCurveBase_ACC981FB454397383DE59DB39B566683;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_ACC981FB454397383DE59DB39B566683;
    class UTimelineComponent* Timeline_0;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Barley_B3(int32 EntryPoint);
};

#endif
