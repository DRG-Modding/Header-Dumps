#ifndef UE4SS_SDK_Options_UpscalingType_HPP
#define UE4SS_SDK_Options_UpscalingType_HPP

class UOptions_UpscalingType_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    TArray<int32> IndexMap;

    void AddIndex(FText Option, int32 ID);
    void IdToIndex(int32 ID, int32& Index);
    void IndexToId(int32 Index, int32& ID);
    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Options_UpscalingType_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_UpscalingType(int32 EntryPoint);
};

#endif
