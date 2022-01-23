#ifndef UE4SS_SDK_BP_MatrixCore_Tester_HPP
#define UE4SS_SDK_BP_MatrixCore_Tester_HPP

class ABP_MatrixCore_Tester_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMeshComponent0;
    float Timeline_0_NewTrack_0_FDA54F6E407E95314A1E7D9167906039;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FDA54F6E407E95314A1E7D9167906039;
    class UTimelineComponent* Timeline_0;
    class UMaterialInstanceDynamic* BlinkMat;
    class USchematic* Schematic;

    bool Attached(class AActor* Parent);
    bool Released();
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_MatrixCore_Tester(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UMatrixCore_Display_C* K2Node_DynamicCast_AsMatrix_Core_Display, bool K2Node_DynamicCast_bSuccess);
};

#endif
