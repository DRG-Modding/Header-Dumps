#ifndef UE4SS_SDK_MatrixCore_Display_HPP
#define UE4SS_SDK_MatrixCore_Display_HPP

class UMatrixCore_Display_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_55;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class URetainerBox* RetainerBox_234;

    void SetSchematic(class USchematic* InSchematic);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_MatrixCore_Display(int32 EntryPoint);
};

#endif
