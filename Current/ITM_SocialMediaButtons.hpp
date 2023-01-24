#ifndef UE4SS_SDK_ITM_SocialMediaButtons_HPP
#define UE4SS_SDK_ITM_SocialMediaButtons_HPP

class UITM_SocialMediaButtons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Construct();
    void ExecuteUbergraph_ITM_SocialMediaButtons(int32 EntryPoint);
};

#endif
