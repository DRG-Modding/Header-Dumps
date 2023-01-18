#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_Xmas2019_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_Xmas2019_HPP

class UUI_InfoScreen_Overlay_Xmas2019_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Idle;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* Image_0;
    class UImage* Image_115;
    class UImage* Image_117;

    void Construct();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_Xmas2019(int32 EntryPoint);
};

#endif
