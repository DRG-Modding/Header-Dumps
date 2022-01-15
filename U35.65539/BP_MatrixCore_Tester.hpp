#ifndef UE4SS_SDK_BP_MatrixCore_Tester_HPP
#define UE4SS_SDK_BP_MatrixCore_Tester_HPP

class ABP_MatrixCore_Tester_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMeshComponent0;
    float Timeline_0_NewTrack_0_FDA54F6E407E95314A1E7D9167906039;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FDA54F6E407E95314A1E7D9167906039;
    UTimelineComponent* Timeline_0;
    UMaterialInstanceDynamic* BlinkMat;
    USchematic* Schematic;

    bool Attached(AActor* Parent);
    bool Released();
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_BP_MatrixCore_Tester(int32 EntryPoint, AActor* K2Node_Event_OtherActor, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UMatrixCore_Display_C* K2Node_DynamicCast_AsMatrix_Core_Display, bool K2Node_DynamicCast_bSuccess);
}

#endif
