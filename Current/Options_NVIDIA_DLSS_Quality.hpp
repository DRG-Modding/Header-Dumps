#ifndef UE4SS_SDK_Options_NVIDIA_DLSS_Quality_HPP
#define UE4SS_SDK_Options_NVIDIA_DLSS_Quality_HPP

class UOptions_NVIDIA_DLSS_Quality_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    TArray<UDLSSMode> IndexMap;

    void Add Index(UDLSSMode Mode);
    void ModeToIndex(UDLSSMode Mode, int32& Index);
    void IndexToMode(int32 Index, UDLSSMode& Mode);
    void GetDLSSModeName(UDLSSMode Mode, FText& Name);
    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Options_NVIDIA_DLSS_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_NVIDIA_DLSS_Quality(int32 EntryPoint);
};

#endif
