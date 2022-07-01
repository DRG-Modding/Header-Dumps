#ifndef UE4SS_SDK_OnScreenIndicator_EscortButton_HPP
#define UE4SS_SDK_OnScreenIndicator_EscortButton_HPP

class UOnScreenIndicator_EscortButton_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Arrow;
    class UImage* Image_Icon;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_EscortButton(int32 EntryPoint);
};

#endif
