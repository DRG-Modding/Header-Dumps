#ifndef UE4SS_SDK_Options_Tab_GFX_HPP
#define UE4SS_SDK_Options_Tab_GFX_HPP

class UOptions_Tab_GFX_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOptions_Tab_GFX_Console_C* Options_Tab_GFX_Console;
    class UOptions_Tab_GFX_Steam_C* Options_Tab_GFX_Steam;
    class UWidgetSwitcher* PlatformSwitcher;
    EFSDTargetPlatform Platform;

    void SetPlatform(EFSDTargetPlatform Platform, EFSDTargetPlatform Temp_byte_Variable, class UWidget* K2Node_Select_Default);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_Tab_GFX(int32 EntryPoint, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
