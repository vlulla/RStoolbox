context("readMeta & stackMeta")

mfil <- list.files("testdata/metadata", full = TRUE)
for(f in mfil) {
	test_that(paste("readMeta and summary(readMeta)", basename(f)), {
				expect_s3_class(m <- readMeta(f), c("RStoolbox", "ImageMetaData"))
				expect_s3_class(m$ACQUISITION_DATE, c("POSIXlt", "POSIXt")) 
                expect_true(all(grepl("^B1?[0-9]_(dn|toa|sre){1}$", m$DATA$BANDS[1:4])))
				expect_output( summary(m), "Scene:")
			})
	
}

mtlFile  <- system.file("external/landsat/LT52240631988227CUB02_MTL.txt", package="RStoolbox")
test_that("stackMeta with exampleData", {
			expect_s4_class(st <- stackMeta(mtlFile), "RasterStack")
			expect_s4_class(stackMeta(readMeta(mtlFile)), "RasterStack")
            expect_true(all(grepl("B[1-7]_dn", names(st))))
		})
