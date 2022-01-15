#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_Xmas2019_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_Xmas2019_HPP

class UUI_InfoScreen_Overlay_Xmas2019_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Idle;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UImage* Image_0;
    UImage* Image_115;
    UImage* Image_117;

    void Construct();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_Xmas2019(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
