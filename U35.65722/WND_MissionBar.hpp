#ifndef UE4SS_SDK_WND_MissionBar_HPP
#define UE4SS_SDK_WND_MissionBar_HPP

class UWND_MissionBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasRoot;

    void SetMissionType(bool IsSingleMission, class UCanvasPanelSlot* SlotWidget, class UUserWidget* Widget, bool Temp_bool_Variable, TSubclassOf<class UUserWidget> Temp_class_Variable, TSubclassOf<class UUserWidget> Temp_class_Variable_1, TSubclassOf<class UUserWidget> K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, FAnchors K2Node_MakeStruct_Anchors);
    void SetGeneratedMission(class UGeneratedMission* InMission, class UCanvasPanelSlot* SlotWidget, class UUserWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue);
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WND_MissionBar(int32 EntryPoint, FExecuteUbergraph_WND_MissionBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_Event_IsDesignTime);
};

#endif
