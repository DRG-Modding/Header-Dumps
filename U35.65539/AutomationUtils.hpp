#ifndef UE4SS_SDK_AutomationUtils_HPP
#define UE4SS_SDK_AutomationUtils_HPP

class UAutomationUtilsBlueprintLibrary : UBlueprintFunctionLibrary
{

    void TakeGameplayAutomationScreenshot(const FString ScreenshotName, float MaxGlobalError, float MaxLocalError, FString MapNameOverride);
}

#endif
