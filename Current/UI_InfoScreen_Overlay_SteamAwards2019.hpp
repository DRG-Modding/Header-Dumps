#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_SteamAwards2019_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_SteamAwards2019_HPP

class UUI_InfoScreen_Overlay_SteamAwards2019_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Idle;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* Glow1;
    class UImage* Glow2;
    class UImage* Icon;
    class UImage* Image_0;

    void Construct();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_SteamAwards2019(int32 EntryPoint);
};

#endif
