#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_SteamAwards2019_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_SteamAwards2019_HPP

class UUI_InfoScreen_Overlay_SteamAwards2019_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Idle;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UImage* Glow1;
    UImage* Glow2;
    UImage* Icon;
    UImage* Image_0;

    void Construct();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_SteamAwards2019(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
