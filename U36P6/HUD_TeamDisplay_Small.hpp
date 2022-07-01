#ifndef UE4SS_SDK_HUD_TeamDisplay_Small_HPP
#define UE4SS_SDK_HUD_TeamDisplay_Small_HPP

class UHUD_TeamDisplay_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_TeamDisplay_Bosco_C* HUD_TeamDisplay_Bosco;
    class UVerticalBox* TeamBox;
    bool animate;

    void Construct();
    void OnPlayerJoined(class AFSDPlayerState* PlayerState);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_TeamDisplay_Small(int32 EntryPoint);
};

#endif
