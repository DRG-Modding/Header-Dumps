#ifndef UE4SS_SDK_WND_MissionBar_HPP
#define UE4SS_SDK_WND_MissionBar_HPP

class UWND_MissionBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* CanvasRoot;

    void SetMissionType(bool IsSingleMission, UCanvasPanelSlot* SlotWidget, UUserWidget* Widget, bool Temp_bool_Variable, TSubclassOf<UUserWidget> Temp_class_Variable, TSubclassOf<UUserWidget> Temp_class_Variable_1, TSubclassOf<UUserWidget> K2Node_Select_Default, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, UUserWidget* CallFunc_Create_ReturnValue, FAnchors K2Node_MakeStruct_Anchors);
    void SetGeneratedMission(UGeneratedMission* InMission, UCanvasPanelSlot* SlotWidget, UUserWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue);
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WND_MissionBar(int32 EntryPoint, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_Event_IsDesignTime);
}

#endif
