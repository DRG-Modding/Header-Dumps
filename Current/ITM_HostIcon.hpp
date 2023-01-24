#ifndef UE4SS_SDK_ITM_HostIcon_HPP
#define UE4SS_SDK_ITM_HostIcon_HPP

class UITM_HostIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG_Host;
    class UImage* Icon_Host;
    class USizeBox* SizeBox_0;
    float Size;

    void SetSize(float Size);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_HostIcon(int32 EntryPoint);
};

#endif
