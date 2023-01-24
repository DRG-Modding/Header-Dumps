#ifndef UE4SS_SDK_UI_ForceSeasonEvent_HPP
#define UE4SS_SDK_UI_ForceSeasonEvent_HPP

class UUI_ForceSeasonEvent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* ComboBoxString_45;
    FString NewVar_0;
    TArray<TSoftObjectPtr<USpecialEvent>> Events;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_UI_ForceSeasonEvent(int32 EntryPoint);
};

#endif
