#ifndef UE4SS_SDK_OnScreenIndicator_BarrelDispenser_HPP
#define UE4SS_SDK_OnScreenIndicator_BarrelDispenser_HPP

class UOnScreenIndicator_BarrelDispenser_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_581;
    class UTextBlock* TextBlock_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_BarrelDispenser(int32 EntryPoint);
};

#endif
