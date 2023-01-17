#ifndef UE4SS_SDK_Options_FullScreen_Resolutions_HPP
#define UE4SS_SDK_Options_FullScreen_Resolutions_HPP

class UOptions_FullScreen_Resolutions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    TArray<FIntPoint> NonPrimaryMonitorResolution;

    void AddNonPrimaryMonitorResolutions();
    bool ShouldResolutionBeEnabled(class UFSDGameUserSettings* usersettings);
    void StringToRes(FString String, FIntPoint& IntPoint);
    void ResToString(FIntPoint& IntPoint, FString& String);
    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_FullScreen_Resolutions(int32 EntryPoint);
};

#endif
