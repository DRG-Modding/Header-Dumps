#ifndef UE4SS_SDK_ITM_Overclock_Details_Item_HPP
#define UE4SS_SDK_ITM_Overclock_Details_Item_HPP

class UITM_Overclock_Details_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* AdvantagousIcon;
    class UTextBlock* DetailText;
    FText Text;
    bool IsAdvantagous;
    int32 FontSize;

    void SetFontSize(int32 NewSize);
    void SetData(FText InText, bool InIsAdvantagous);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Overclock_Details_Item(int32 EntryPoint);
};

#endif
