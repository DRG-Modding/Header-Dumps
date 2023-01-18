#ifndef UE4SS_SDK_HUD_CrossHair_Vacuum_HPP
#define UE4SS_SDK_HUD_CrossHair_Vacuum_HPP

class UHUD_CrossHair_Vacuum_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CH_Bottom;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Image;
    class UImage* Image_79;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_Vacuum(int32 EntryPoint);
};

#endif
