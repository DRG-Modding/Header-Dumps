#ifndef UE4SS_SDK_HUD_Warning_Manager_HPP
#define UE4SS_SDK_HUD_Warning_Manager_HPP

class UHUD_Warning_Manager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* V_WarningHolder;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnNewHUDWarning_Event(class UHUDWarningWidget* newWidget);
    void ExecuteUbergraph_HUD_Warning_Manager(int32 EntryPoint);
};

#endif
