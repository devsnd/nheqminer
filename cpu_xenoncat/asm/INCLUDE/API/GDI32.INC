
; GDI32 API calls

import gdi32,\
       AbortDoc,'AbortDoc',\
       AbortPath,'AbortPath',\
       AddFontMemResourceEx,'AddFontMemResourceEx',\
       AddFontResourceA,'AddFontResourceA',\
       AddFontResourceW,'AddFontResourceW',\
       AddFontResourceExA,'AddFontResourceExA',\
       AddFontResourceExW,'AddFontResourceExW',\
       AngleArc,'AngleArc',\
       AnimatePalette,'AnimatePalette',\
       Arc,'Arc',\
       ArcTo,'ArcTo',\
       BeginPath,'BeginPath',\
       BitBlt,'BitBlt',\
       CancelDC,'CancelDC',\
       CheckColorsInGamut,'CheckColorsInGamut',\
       ChoosePixelFormat,'ChoosePixelFormat',\
       Chord,'Chord',\
       CloseEnhMetaFile,'CloseEnhMetaFile',\
       CloseFigure,'CloseFigure',\
       CloseMetaFile,'CloseMetaFile',\
       ColorCorrectPalette,'ColorCorrectPalette',\
       ColorMatchToTarget,'ColorMatchToTarget',\
       CombineRgn,'CombineRgn',\
       CombineTransform,'CombineTransform',\
       CopyEnhMetaFileA,'CopyEnhMetaFileA',\
       CopyEnhMetaFileW,'CopyEnhMetaFileW',\
       CopyMetaFileA,'CopyMetaFileA',\
       CopyMetaFileW,'CopyMetaFileW',\
       CreateBitmap,'CreateBitmap',\
       CreateBitmapIndirect,'CreateBitmapIndirect',\
       CreateBrushIndirect,'CreateBrushIndirect',\
       CreateColorSpaceA,'CreateColorSpaceA',\
       CreateColorSpaceW,'CreateColorSpaceW',\
       CreateCompatibleBitmap,'CreateCompatibleBitmap',\
       CreateCompatibleDC,'CreateCompatibleDC',\
       CreateDCA,'CreateDCA',\
       CreateDCW,'CreateDCW',\
       CreateDIBPatternBrush,'CreateDIBPatternBrush',\
       CreateDIBPatternBrushPt,'CreateDIBPatternBrushPt',\
       CreateDIBSection,'CreateDIBSection',\
       CreateDIBitmap,'CreateDIBitmap',\
       CreateDiscardableBitmap,'CreateDiscardableBitmap',\
       CreateEllipticRgn,'CreateEllipticRgn',\
       CreateEllipticRgnIndirect,'CreateEllipticRgnIndirect',\
       CreateEnhMetaFileA,'CreateEnhMetaFileA',\
       CreateEnhMetaFileW,'CreateEnhMetaFileW',\
       CreateFontA,'CreateFontA',\
       CreateFontW,'CreateFontW',\
       CreateFontIndirectA,'CreateFontIndirectA',\
       CreateFontIndirectW,'CreateFontIndirectW',\
       CreateFontIndirectExA,'CreateFontIndirectExA',\
       CreateFontIndirectExW,'CreateFontIndirectExW',\
       CreateHalftonePalette,'CreateHalftonePalette',\
       CreateHatchBrush,'CreateHatchBrush',\
       CreateICA,'CreateICA',\
       CreateICW,'CreateICW',\
       CreateMetaFileA,'CreateMetaFileA',\
       CreateMetaFileW,'CreateMetaFileW',\
       CreatePalette,'CreatePalette',\
       CreatePatternBrush,'CreatePatternBrush',\
       CreatePen,'CreatePen',\
       CreatePenIndirect,'CreatePenIndirect',\
       CreatePolyPolygonRgn,'CreatePolyPolygonRgn',\
       CreatePolygonRgn,'CreatePolygonRgn',\
       CreateRectRgn,'CreateRectRgn',\
       CreateRectRgnIndirect,'CreateRectRgnIndirect',\
       CreateRoundRectRgn,'CreateRoundRectRgn',\
       CreateScalableFontResourceA,'CreateScalableFontResourceA',\
       CreateScalableFontResourceW,'CreateScalableFontResourceW',\
       CreateSolidBrush,'CreateSolidBrush',\
       DPtoLP,'DPtoLP',\
       DeleteColorSpace,'DeleteColorSpace',\
       DeleteDC,'DeleteDC',\
       DeleteEnhMetaFile,'DeleteEnhMetaFile',\
       DeleteMetaFile,'DeleteMetaFile',\
       DeleteObject,'DeleteObject',\
       DescribePixelFormat,'DescribePixelFormat',\
       DeviceCapabilitiesExA,'DeviceCapabilitiesExA',\
       DeviceCapabilitiesExW,'DeviceCapabilitiesExW',\
       DrawEscape,'DrawEscape',\
       Ellipse,'Ellipse',\
       EnableEUDC,'EnableEUDC',\
       EndDoc,'EndDoc',\
       EndPage,'EndPage',\
       EndPath,'EndPath',\
       EnumEnhMetaFile,'EnumEnhMetaFile',\
       EnumFontFamiliesA,'EnumFontFamiliesA',\
       EnumFontFamiliesW,'EnumFontFamiliesW',\
       EnumFontFamiliesExA,'EnumFontFamiliesExA',\
       EnumFontFamiliesExW,'EnumFontFamiliesExW',\
       EnumFontsA,'EnumFontsA',\
       EnumFontsW,'EnumFontsW',\
       EnumICMProfilesA,'EnumICMProfilesA',\
       EnumICMProfilesW,'EnumICMProfilesW',\
       EnumMetaFile,'EnumMetaFile',\
       EnumObjects,'EnumObjects',\
       EqualRgn,'EqualRgn',\
       Escape,'Escape',\
       ExcludeClipRect,'ExcludeClipRect',\
       ExtCreatePen,'ExtCreatePen',\
       ExtCreateRegion,'ExtCreateRegion',\
       ExtEscape,'ExtEscape',\
       ExtFloodFill,'ExtFloodFill',\
       ExtSelectClipRgn,'ExtSelectClipRgn',\
       ExtTextOutA,'ExtTextOutA',\
       ExtTextOutW,'ExtTextOutW',\
       FillPath,'FillPath',\
       FillRgn,'FillRgn',\
       FixBrushOrgEx,'FixBrushOrgEx',\
       FlattenPath,'FlattenPath',\
       FloodFill,'FloodFill',\
       FrameRgn,'FrameRgn',\
       GdiComment,'GdiComment',\
       GdiDeleteSpoolFileHandle,'GdiDeleteSpoolFileHandle',\
       GdiEndDocEMF,'GdiEndDocEMF',\
       GdiEndPageEMF,'GdiEndPageEMF',\
       GdiFlush,'GdiFlush',\
       GdiGetBatchLimit,'GdiGetBatchLimit',\
       GdiGetDC,'GdiGetDC',\
       GdiGetDevmodeForPage,'GdiGetDevmodeForPage',\
       GdiGetPageCount,'GdiGetPageCount',\
       GdiGetPageHandle,'GdiGetPageHandle',\
       GdiGetSpoolFileHandle,'GdiGetSpoolFileHandle',\
       GdiPlayDCScript,'GdiPlayDCScript',\
       GdiPlayEMF,'GdiPlayEMF',\
       GdiPlayJournal,'GdiPlayJournal',\
       GdiPlayPageEMF,'GdiPlayPageEMF',\
       GdiPlayPrivatePageEMF,'GdiPlayPrivatePageEMF',\
       GdiPlayScript,'GdiPlayScript',\
       GdiResetDCEMF,'GdiResetDCEMF',\
       GdiSetBatchLimit,'GdiSetBatchLimit',\
       GdiStartDocEMF,'GdiStartDocEMF',\
       GdiStartPageEMF,'GdiStartPageEMF',\
       GetArcDirection,'GetArcDirection',\
       GetAspectRatioFilterEx,'GetAspectRatioFilterEx',\
       GetBitmapBits,'GetBitmapBits',\
       GetBitmapDimensionEx,'GetBitmapDimensionEx',\
       GetBkColor,'GetBkColor',\
       GetBkMode,'GetBkMode',\
       GetBoundsRect,'GetBoundsRect',\
       GetBrushOrgEx,'GetBrushOrgEx',\
       GetCharABCWidthsA,'GetCharABCWidthsA',\
       GetCharABCWidthsW,'GetCharABCWidthsW',\
       GetCharABCWidthsFloatA,'GetCharABCWidthsFloatA',\
       GetCharABCWidthsFloatW,'GetCharABCWidthsFloatW',\
       GetCharABCWidthsI,'GetCharABCWidthsI',\
       GetCharWidth32A,'GetCharWidth32A',\
       GetCharWidth32W,'GetCharWidth32W',\
       GetCharWidthA,'GetCharWidthA',\
       GetCharWidthW,'GetCharWidthW',\
       GetCharWidthFloatA,'GetCharWidthFloatA',\
       GetCharWidthFloatW,'GetCharWidthFloatW',\
       GetCharWidthI,'GetCharWidthI',\
       GetCharacterPlacementA,'GetCharacterPlacementA',\
       GetCharacterPlacementW,'GetCharacterPlacementW',\
       GetClipBox,'GetClipBox',\
       GetClipRgn,'GetClipRgn',\
       GetColorAdjustment,'GetColorAdjustment',\
       GetColorSpace,'GetColorSpace',\
       GetCurrentObject,'GetCurrentObject',\
       GetCurrentPositionEx,'GetCurrentPositionEx',\
       GetDCBrushColor,'GetDCBrushColor',\
       GetDCOrgEx,'GetDCOrgEx',\
       GetDCPenColor,'GetDCPenColor',\
       GetDIBColorTable,'GetDIBColorTable',\
       GetDIBits,'GetDIBits',\
       GetDeviceCaps,'GetDeviceCaps',\
       GetDeviceGammaRamp,'GetDeviceGammaRamp',\
       GetEnhMetaFileA,'GetEnhMetaFileA',\
       GetEnhMetaFileW,'GetEnhMetaFileW',\
       GetEnhMetaFileBits,'GetEnhMetaFileBits',\
       GetEnhMetaFileDescriptionA,'GetEnhMetaFileDescriptionA',\
       GetEnhMetaFileDescriptionW,'GetEnhMetaFileDescriptionW',\
       GetEnhMetaFileHeader,'GetEnhMetaFileHeader',\
       GetEnhMetaFilePaletteEntries,'GetEnhMetaFilePaletteEntries',\
       GetEnhMetaFilePixelFormat,'GetEnhMetaFilePixelFormat',\
       GetFontAssocStatus,'GetFontAssocStatus',\
       GetFontData,'GetFontData',\
       GetFontLanguageInfo,'GetFontLanguageInfo',\
       GetFontUnicodeRanges,'GetFontUnicodeRanges',\
       GetGlyphIndicesA,'GetGlyphIndicesA',\
       GetGlyphIndicesW,'GetGlyphIndicesW',\
       GetGlyphOutlineA,'GetGlyphOutlineA',\
       GetGlyphOutlineW,'GetGlyphOutlineW',\
       GetGraphicsMode,'GetGraphicsMode',\
       GetICMProfileA,'GetICMProfileA',\
       GetICMProfileW,'GetICMProfileW',\
       GetKerningPairsA,'GetKerningPairsA',\
       GetKerningPairsW,'GetKerningPairsW',\
       GetLogColorSpaceA,'GetLogColorSpaceA',\
       GetLogColorSpaceW,'GetLogColorSpaceW',\
       GetMapMode,'GetMapMode',\
       GetMetaFileA,'GetMetaFileA',\
       GetMetaFileW,'GetMetaFileW',\
       GetMetaFileBitsEx,'GetMetaFileBitsEx',\
       GetMetaRgn,'GetMetaRgn',\
       GetMiterLimit,'GetMiterLimit',\
       GetNearestColor,'GetNearestColor',\
       GetNearestPaletteIndex,'GetNearestPaletteIndex',\
       GetObjectA,'GetObjectA',\
       GetObjectW,'GetObjectW',\
       GetObjectType,'GetObjectType',\
       GetOutlineTextMetricsA,'GetOutlineTextMetricsA',\
       GetOutlineTextMetricsW,'GetOutlineTextMetricsW',\
       GetPaletteEntries,'GetPaletteEntries',\
       GetPath,'GetPath',\
       GetPixel,'GetPixel',\
       GetPixelFormat,'GetPixelFormat',\
       GetPolyFillMode,'GetPolyFillMode',\
       GetROP2,'GetROP2',\
       GetRandomRgn,'GetRandomRgn',\
       GetRasterizerCaps,'GetRasterizerCaps',\
       GetRegionData,'GetRegionData',\
       GetRelAbs,'GetRelAbs',\
       GetRgnBox,'GetRgnBox',\
       GetStockObject,'GetStockObject',\
       GetStretchBltMode,'GetStretchBltMode',\
       GetSystemPaletteEntries,'GetSystemPaletteEntries',\
       GetSystemPaletteUse,'GetSystemPaletteUse',\
       GetTextAlign,'GetTextAlign',\
       GetTextCharacterExtra,'GetTextCharacterExtra',\
       GetTextCharset,'GetTextCharset',\
       GetTextCharsetInfo,'GetTextCharsetInfo',\
       GetTextColor,'GetTextColor',\
       GetTextExtentExPointA,'GetTextExtentExPointA',\
       GetTextExtentExPointW,'GetTextExtentExPointW',\
       GetTextExtentExPointI,'GetTextExtentExPointI',\
       GetTextExtentPoint32A,'GetTextExtentPoint32A',\
       GetTextExtentPoint32W,'GetTextExtentPoint32W',\
       GetTextExtentPointA,'GetTextExtentPointA',\
       GetTextExtentPointW,'GetTextExtentPointW',\
       GetTextExtentPointI,'GetTextExtentPointI',\
       GetTextFaceA,'GetTextFaceA',\
       GetTextFaceW,'GetTextFaceW',\
       GetTextMetricsA,'GetTextMetricsA',\
       GetTextMetricsW,'GetTextMetricsW',\
       GetViewportExtEx,'GetViewportExtEx',\
       GetViewportOrgEx,'GetViewportOrgEx',\
       GetWinMetaFileBits,'GetWinMetaFileBits',\
       GetWindowExtEx,'GetWindowExtEx',\
       GetWindowOrgEx,'GetWindowOrgEx',\
       GetWorldTransform,'GetWorldTransform',\
       IntersectClipRect,'IntersectClipRect',\
       InvertRgn,'InvertRgn',\
       LPtoDP,'LPtoDP',\
       LineDDA,'LineDDA',\
       LineDDW,'LineDDW',\
       LineTo,'LineTo',\
       MaskBlt,'MaskBlt',\
       ModifyWorldTransform,'ModifyWorldTransform',\
       MoveToEx,'MoveToEx',\
       OffsetClipRgn,'OffsetClipRgn',\
       OffsetRgn,'OffsetRgn',\
       OffsetViewportOrgEx,'OffsetViewportOrgEx',\
       OffsetWindowOrgEx,'OffsetWindowOrgEx',\
       PaintRgn,'PaintRgn',\
       PatBlt,'PatBlt',\
       PathToRegion,'PathToRegion',\
       Pie,'Pie',\
       PlayEnhMetaFile,'PlayEnhMetaFile',\
       PlayEnhMetaFileRecord,'PlayEnhMetaFileRecord',\
       PlayMetaFile,'PlayMetaFile',\
       PlayMetaFileRecord,'PlayMetaFileRecord',\
       PlgBlt,'PlgBlt',\
       PolyBezier,'PolyBezier',\
       PolyBezierTo,'PolyBezierTo',\
       PolyDraw,'PolyDraw',\
       PolyPatBlt,'PolyPatBlt',\
       PolyPolygon,'PolyPolygon',\
       PolyPolyline,'PolyPolyline',\
       PolyTextOutA,'PolyTextOutA',\
       PolyTextOutW,'PolyTextOutW',\
       Polygon,'Polygon',\
       Polyline,'Polyline',\
       PolylineTo,'PolylineTo',\
       PtInRegion,'PtInRegion',\
       PtVisible,'PtVisible',\
       RealizePalette,'RealizePalette',\
       RectInRegion,'RectInRegion',\
       RectVisible,'RectVisible',\
       Rectangle,'Rectangle',\
       RemoveFontMemResourceEx,'RemoveFontMemResourceEx',\
       RemoveFontResourceA,'RemoveFontResourceA',\
       RemoveFontResourceW,'RemoveFontResourceW',\
       RemoveFontResourceExA,'RemoveFontResourceExA',\
       RemoveFontResourceExW,'RemoveFontResourceExW',\
       ResetDCA,'ResetDCA',\
       ResetDCW,'ResetDCW',\
       ResizePalette,'ResizePalette',\
       RestoreDC,'RestoreDC',\
       RoundRect,'RoundRect',\
       SaveDC,'SaveDC',\
       ScaleViewportExtEx,'ScaleViewportExtEx',\
       ScaleWindowExtEx,'ScaleWindowExtEx',\
       SelectBrushLocal,'SelectBrushLocal',\
       SelectClipPath,'SelectClipPath',\
       SelectClipRgn,'SelectClipRgn',\
       SelectFontLocal,'SelectFontLocal',\
       SelectObject,'SelectObject',\
       SelectPalette,'SelectPalette',\
       SetAbortProc,'SetAbortProc',\
       SetArcDirection,'SetArcDirection',\
       SetBitmapBits,'SetBitmapBits',\
       SetBitmapDimensionEx,'SetBitmapDimensionEx',\
       SetBkColor,'SetBkColor',\
       SetBkMode,'SetBkMode',\
       SetBoundsRect,'SetBoundsRect',\
       SetBrushOrgEx,'SetBrushOrgEx',\
       SetColorAdjustment,'SetColorAdjustment',\
       SetColorSpace,'SetColorSpace',\
       SetDCBrushColor,'SetDCBrushColor',\
       SetDCPenColor,'SetDCPenColor',\
       SetDIBColorTable,'SetDIBColorTable',\
       SetDIBits,'SetDIBits',\
       SetDIBitsToDevice,'SetDIBitsToDevice',\
       SetDeviceGammaRamp,'SetDeviceGammaRamp',\
       SetEnhMetaFileBits,'SetEnhMetaFileBits',\
       SetFontEnumeration,'SetFontEnumeration',\
       SetGraphicsMode,'SetGraphicsMode',\
       SetICMMode,'SetICMMode',\
       SetICMProfileA,'SetICMProfileA',\
       SetICMProfileW,'SetICMProfileW',\
       SetMagicColors,'SetMagicColors',\
       SetMapMode,'SetMapMode',\
       SetMapperFlags,'SetMapperFlags',\
       SetMetaFileBitsEx,'SetMetaFileBitsEx',\
       SetMetaRgn,'SetMetaRgn',\
       SetMiterLimit,'SetMiterLimit',\
       SetPaletteEntries,'SetPaletteEntries',\
       SetPixel,'SetPixel',\
       SetPixelFormat,'SetPixelFormat',\
       SetPixelV,'SetPixelV',\
       SetPolyFillMode,'SetPolyFillMode',\
       SetROP2,'SetROP2',\
       SetRectRgn,'SetRectRgn',\
       SetRelAbs,'SetRelAbs',\
       SetStretchBltMode,'SetStretchBltMode',\
       SetSystemPaletteUse,'SetSystemPaletteUse',\
       SetTextAlign,'SetTextAlign',\
       SetTextCharacterExtra,'SetTextCharacterExtra',\
       SetTextColor,'SetTextColor',\
       SetTextJustification,'SetTextJustification',\
       SetViewportExtEx,'SetViewportExtEx',\
       SetViewportOrgEx,'SetViewportOrgEx',\
       SetWinMetaFileBits,'SetWinMetaFileBits',\
       SetWindowExtEx,'SetWindowExtEx',\
       SetWindowOrgEx,'SetWindowOrgEx',\
       SetWorldTransform,'SetWorldTransform',\
       StartDocA,'StartDocA',\
       StartDocW,'StartDocW',\
       StartPage,'StartPage',\
       StretchBlt,'StretchBlt',\
       StretchDIBits,'StretchDIBits',\
       StrokeAndFillPath,'StrokeAndFillPath',\
       StrokePath,'StrokePath',\
       SwapBuffers,'SwapBuffers',\
       TextOutA,'TextOutA',\
       TextOutW,'TextOutW',\
       TranslateCharsetInfo,'TranslateCharsetInfo',\
       UnrealizeObject,'UnrealizeObject',\
       UpdateColors,'UpdateColors',\
       UpdateICMRegKeyA,'UpdateICMRegKeyA',\
       UpdateICMRegKeyW,'UpdateICMRegKeyW',\
       WidenPath,'WidenPath',\
       gdiPlaySpoolStream,'gdiPlaySpoolStream'

api AddFontResource,\
    AddFontResourceEx,\
    CopyEnhMetaFile,\
    CopyMetaFile,\
    CreateColorSpace,\
    CreateDC,\
    CreateEnhMetaFile,\
    CreateFont,\
    CreateFontIndirect,\
    CreateFontIndirectEx,\
    CreateIC,\
    CreateMetaFile,\
    CreateScalableFontResource,\
    DeviceCapabilitiesEx,\
    EnumFontFamilies,\
    EnumFontFamiliesEx,\
    EnumFonts,\
    EnumICMProfiles,\
    ExtTextOut,\
    GetCharABCWidths,\
    GetCharABCWidthsFloat,\
    GetCharWidth32,\
    GetCharWidth,\
    GetCharWidthFloat,\
    GetCharacterPlacement,\
    GetEnhMetaFile,\
    GetEnhMetaFileDescription,\
    GetGlyphIndices,\
    GetGlyphOutline,\
    GetICMProfile,\
    GetKerningPairs,\
    GetLogColorSpace,\
    GetMetaFile,\
    GetObject,\
    GetOutlineTextMetrics,\
    GetTextExtentExPoint,\
    GetTextExtentPoint32,\
    GetTextExtentPoint,\
    GetTextFace,\
    GetTextMetrics,\
    LineDD,\
    PolyTextOut,\
    RemoveFontResource,\
    RemoveFontResourceEx,\
    ResetDC,\
    SetICMProfile,\
    StartDoc,\
    TextOut,\
    UpdateICMRegKey
