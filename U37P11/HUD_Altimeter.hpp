#ifndef UE4SS_SDK_HUD_Altimeter_HPP
#define UE4SS_SDK_HUD_Altimeter_HPP

class UHUD_Altimeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Border;
    class UTextBlock* DepthLabel;

    void SetDepth(int32 NewDepth);
    void Construct();
    void DepthChanged(int32 Depth);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Altimeter(int32 EntryPoint);
};

#endif
