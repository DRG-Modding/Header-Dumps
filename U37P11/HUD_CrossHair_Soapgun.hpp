#ifndef UE4SS_SDK_HUD_CrossHair_Soapgun_HPP
#define UE4SS_SDK_HUD_CrossHair_Soapgun_HPP

class UHUD_CrossHair_Soapgun_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CH_Bottom;
    class UImage* CH_Left;
    class UImage* CH_LeftInterior;
    class UImage* CH_RighInterior;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* CH_TopInterior;
    class UImage* Dot_1;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_7;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_Soapgun(int32 EntryPoint);
};

#endif
